#include <stdio.h>
void findPositionOfChar(char array[], int size, char target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            printf("ki tu '%c' duoc tim thay o vi tri %d.\n", target, i + 1); // 1-based index
            return;
        }
    }
    printf("ki tu '%c' khong duoc tim thay o vi tri.\n", target);
}
int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    findPositionOfChar(Array, 6, 'p');
    return 0;
}