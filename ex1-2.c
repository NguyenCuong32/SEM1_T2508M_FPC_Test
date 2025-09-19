#include <stdio.h>
int findPosition(char Array[], int size, char target) {
    for(int i = 0; i < size; i++) {
        if(Array[i] == target) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int position = findPosition(Array, 6, 'p');
    if(position != -1) {
        printf("The position of 'p' in the array is %d\n", position);
    } else {
        printf("'p' is not found in the array.\n");
    }
    return 0;
}