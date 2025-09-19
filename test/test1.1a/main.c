#include <stdio.h>
int main() {
    char array[] = {'A', 'p', 't', 'e', 'c', 'h'};
    int n = 6;

    for (int i = 0; i < n; i++) {
        printf("The element %d of the array is %c\n", i + 1, array[i]);
    }

    return 0;
}
