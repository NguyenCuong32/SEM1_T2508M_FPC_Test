#include <stdio.h>

typedef struct {
    char roomName[50];
    int roomNo;
} ClassRoom;

void inputClassroom(ClassRoom classRooms[], int length)
{
    printf("===Enter information for classroom===\n");
    for (int i=0; i < length; i++)
    {
        printf("Room name: ");
        scanf(" %[^\n]", classRooms[i].roomName);

        printf("Room no: ");
        scanf("%d", &classRooms[i].roomNo);
    }
}

void displayClassroom(ClassRoom classRooms[], int length)
{
    printf("\n=== Classroom Information ===\n");
    for (int i = 0; i < length; i++) {
        printf("Room name: %s\n", classRooms[i].roomName);
        printf("Room no: %d\n\n", classRooms[i].roomNo);
    }
}

int main() 
{
    ClassRoom classRooms[10];
    inputClassroom(classRooms, 2);
    displayClassroom(classRooms, 2);
    return 0;
}
