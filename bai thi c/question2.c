#include <stdio.h>
#include <string.h>

struct ClassRoom {
    char name[50];
    int number;
};


void inputClassRooms(struct ClassRoom rooms[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter Room name: ");
        scanf("%s", rooms[i].name);
        printf("Enter Room no: ");
        scanf("%d", &rooms[i].number);
    }
}


void displayClassRooms(struct ClassRoom rooms[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Room name: %s\n", rooms[i].name);
        printf("Room no:%d\n\n", rooms[i].number);
    }
}

int main() {
    struct ClassRoom rooms[10];

    printf(" Enter ClassRooms Information : \n");
    inputClassRooms(rooms, 10);

    printf("\n ClassRooms List : \n");
    displayClassRooms(rooms, 10);

    return 0;
}
