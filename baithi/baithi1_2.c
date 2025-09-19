#include<stdio.h>
void findPosition(char array[], int n, char c) {
    for (int i = 0; i < n; i++) {
        if (array[i] == c) {
            printf("The position of '%c' is: %d\n", c, i + 1);
            return;
             }
    }
    printf("Character '%c' not found in array.\n", c);
}
int main()
{
    char array [6]={'A','p','t','e','c','h'};
    findPosition(array,6,'p');
    return 0;
}