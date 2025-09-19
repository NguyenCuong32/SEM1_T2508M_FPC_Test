#include <stdio.h>
int main(void) {
    char Array[] = {'A','p','t','e','c','h'};
    int n = sizeof(Array) / sizeof(Array[0]);
    for (int i = 0; i < n; i++)
        printf("Phần tử %d của mảng là %c\n", i + 1, Array[i]);
    int i = 0;
    while (i < n) {
        printf("Phần tử %d của mảng là %c\n", i + 1, Array[i]);
        i++;
    }
    i = 0;
    if (n > 0) {
        do {
            printf("Phần tử %d của mảng là %c\n", i + 1, Array[i]);
            i++;
        } while (i < n);
    }
    return 0;
}
