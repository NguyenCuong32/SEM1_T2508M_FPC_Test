#include <stdio.h>
int nhapLuaChon() {
    int n;
    printf("=== MENU ===\n");
    printf("1. In bang for\n");
    printf("2. In bang while\n");
    printf("3. In bang do while\n");
    printf("Nhap lua chon: ");
    scanf("%d", &n);
    return n;
}
int lamFor(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("The element %d of the array is %c\n", i + 1, arr[i]);
    }
    return 1;
}
int lamWhile(char arr[], int size) {
    int i = 0;
    while (i < size) {
        printf("The element %d of the array is %c\n", i + 1, arr[i]);
        i++;
    }
    return 2;
}
int lamDoWhile(char arr[], int size) {
    int i = 0;
    do {
        printf("The element %d of the array is %c\n", i + 1, arr[i]);
        i++;
    } while (i < size);
    return 3;
}
int timKyTu(char arr[], int size, char c) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == c) {
            return i + 1; 
        }
    }
    return -1;
}

int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int size = 6;
    int choice = nhapLuaChon();
    int result = 0;
    switch (choice) {
        case 1:
            result = lamFor(Array, size);
            break;
        case 2:
            result = lamWhile(Array, size);
            break;
        case 3:
            result = lamDoWhile(Array, size);
            break;
        default:
            printf("Lua chon khong hop le!\n");
            return 0;
    }

    printf("\n=> Ban da chon cach in so %d\n", result);
    return 0;
}