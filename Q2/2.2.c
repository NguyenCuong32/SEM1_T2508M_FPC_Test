#include <stdio.h>

typedef struct {
    char roomName[50];
    int roomNo;
} ClassRoom;

int main() 
{
    int length = 10;
    ClassRoom classRoom[length];

    for (int i; i < length; i++)
    {
        printf("Enter information for classroom %d\n", i);
        
        printf("Enter room name: ");
        scanf(" %[^\n]", classRoom[i].roomName);

        printf("Enter room no: ");
        scanf("%d", &classRoom[i].roomNo);

        printf("Room name: %s\n", classRoom[i].roomName);
        printf("Room no: %d\n", classRoom[i].roomNo);
    }
    
    return 0;
}
