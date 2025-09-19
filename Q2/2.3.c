#include <stdio.h>

typedef struct {
    char roomName[50];
    int roomNo;
} ClassRoom;

void enterClassroom(ClassRoom classRooms[], int length)
{
    printf("=== Enter information for classroom ===\n");
    for (int i=0; i < length; i++)
    {
        printf("== Class room %d ==\n", i);
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
    int length = 2;
    ClassRoom classRooms[length];
    enterClassroom(classRooms, length);
    displayClassroom(classRooms, length);
    return 0;
}
