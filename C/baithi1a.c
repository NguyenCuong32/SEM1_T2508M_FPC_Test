#include <stdio.h>

int main() {
    int Array[6] = {7, 6, 3, 34, 10, 710};
    int i;

    // Dùng for
    for (i = 0; i < 6; i++) {
        printf("The element %d of the array is %d\n", i + 1, Array[i]);
    }

    return 0;
}
