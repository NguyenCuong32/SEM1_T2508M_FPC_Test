#include <stdio.h>


void question1() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int i;

    
    printf("=== 1.1 a) Using for ===\n");
    for (i = 0; i < 6; i++) {
        printf("The element %d of the array is %c\n", i + 1, Array[i]);
    }

    printf("\n=== 1.1 b) Using while ===\n");
    i = 0;
    while (i < 6) {
        printf("The element %d of the array is %c\n", i + 1, Array[i]);
        i++;
    }

    printf("\n=== 1.1 c) Using do while ===\n");
    i = 0;
    do {
        printf("The element %d of the array is %c\n", i + 1, Array[i]);
        i++;
    } while (i < 6);

    printf("\n=== 1.2 Find position of 'p' ===\n");
    int pos = -1;
    for (i = 0; i < 6; i++) {
        if (Array[i] == 'p') {
            pos = i + 1; 
            break;
        }
    }
    if (pos != -1) {
        printf("The character 'p' is found at position: %d\n", pos);
    } else {
        printf("The character 'p' not found in array.\n");
    }
}

int main() {
    question1();
    return 0;
}