#include <stdio.h>

// Hàm đếm số lần xuất hiện ký tự c trong mảng arr
int count(char arr[], int n, char c) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == c) {
            cnt++;
        }
    }
    return cnt;
}

// Hàm tìm vị trí đầu tiên của ký tự c trong mảng arr
int findPosition(char arr[], int n, char c) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == c) {
            return i + 1; // vị trí tính từ 1
        }
    }
    return -1; // không tìm thấy
}

int main() {
    char arr[] = {'A', 'p', 't', 'e', 'c', 'h'};
    int n = 6;
    char target = 'p';

    int total = count(arr, n, target);      // đếm số lần xuất hiện
    int pos = findPosition(arr, n, target); // tìm vị trí đầu tiên

    if (pos != -1) {
        printf("Character '%c' appears %d time(s).\n", target, total);
        printf("The first position of '%c' in the array is %d\n", target, pos);
    } else {
        printf("Character '%c' not found in the array.\n", target);
    }

    return 0;
}
