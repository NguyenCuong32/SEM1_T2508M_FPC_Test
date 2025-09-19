#include <stdio.h>

typedef struct {
    char roomName[50];
    int roomNo;
} ClassRoom;

int main() {
    ClassRoom c1;

    printf("Enter room name: ");
    scanf(" %[^\n]", c1.roomName);

    printf("Enter room no: ");
    scanf("%d", &c1.roomNo);

    printf("\nRoom name: %s\n", c1.roomName);
    printf("Room no: %d\n", c1.roomNo);

    return 0;
}
