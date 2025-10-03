#include <stdio.h>
int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int i;
    printf("a) su dung vong lap for:\n");
    for(i = 0; i < 6; i++) {
        printf("Phan tu %d cua mang la %c\n", i + 1, Array[i]);
    }
    printf("\nb) su dung vong lap while:\n");
    i = 0;
    while(i < 6) {
        printf("Phan tu %d cua mang la %c\n", i + 1, Array[i]);
        i++;
    }
    printf("\nc)su dung vong lap do-while :\n");
    i = 0;
    do {
        printf("Phan tu %d cua mang la %c\n", i + 1, Array[i]);
        i++;
    } while(i < 6);
    return 0;
}