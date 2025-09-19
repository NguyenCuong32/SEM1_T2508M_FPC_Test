#include <stdio.h>
void printArrayElements(char arr[], int size) {
    printf(" Using for : \n");
    for (int i = 0; i < size; i++) {
        printf("The element %d of the array is %c.\n", i + 1, arr[i]);
    }

    printf("\n Using while : \n");
    int i = 0;
    while (i < size) {
        printf("The element %d of the array is %c.\n", i + 1, arr[i]);
        i++;
    }

    printf("\n Using do while : \n");
    i = 0;
    do {
        printf("The element %d of the array is %c.\n", i + 1, arr[i]);
        i++;
    } while (i < size);
}

void findCharPosition(char arr[], int size, char target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("\nThe position of '%c' is: %d\n", target, i + 1);
            return;
        }
    }
    printf("\nCharacter '%c' not found.\n", target);
}



int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int size = 6;

    printArrayElements(Array, size);

    char target = 'p';
    findCharPosition(Array, size, target);

    return 0;
}