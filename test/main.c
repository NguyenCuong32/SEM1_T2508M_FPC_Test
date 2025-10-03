#include <stdio.h>
int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    printf("Cac ky tu trong mang:\n");
    for(int i = 0; i < 6; i++) {
        printf("Array[%d] = %c\n", i, Array[i]);
    }
    char str[7]; 
    for(int i = 0; i < 6; i++) {
        str[i] = Array[i];
    }
    str[6] = '\0'; 
    printf("\nChuoi tu mang: %s\n", str);
    return 0;
}
