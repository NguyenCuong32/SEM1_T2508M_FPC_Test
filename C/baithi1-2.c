#include <stdio.h>


int findPosition(char arr[], int size, char ch) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == ch) {
            return i + 1;         }
    }
    return -1; }

int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int pos = findPosition(Array, 6, 'p');

    if (pos != -1) {
        printf("The position of 'p' in the array is %d\n", pos);
    } else {
        printf("Character 'p' not found in the array\n");
    }

    return 0;
}
