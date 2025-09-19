#include<stdio.h>


int timKyTu(char arr[], int size, char ch) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == ch) {
            return i + 1; 
        }
    }
    return -1; 
}

int main() {
    char Mang[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    
    int vitri = timKyTu(Mang, 6, 'p');
    if (vitri != -1)
        printf("Vi tri cua ky tu 'p' trong mang la: %d\n", vitri);
    else
        printf("Khong tim thay ky tu 'p' trong mang!\n");

    return 0;
}