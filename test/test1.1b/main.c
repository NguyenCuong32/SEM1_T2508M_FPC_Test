#include <stdio.h>
int main() {
    char arr[] = {'A', 'p', 't', 'e', 'c', 'h'};
    int n = 6;
    int i = 0;

    // while loop
    while (i < n) {
        printf("The element %d of the array is %c\n", i + 1, arr[i]);
        i++;
    }
    return 0;
}
