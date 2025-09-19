#include <stdio.h>

int main() {
    int Array[6] = {7, 6, 3, 34, 10, 710};
    int i = 0;

   
    while (i < 6) {
        printf("The element %d of the array is %d\n", i + 1, Array[i]);
        i++;
    }

    return 0;
}
