#include <stdio.h>
#include <string.h>

struct ClassRoom {
    char roomName[50];  
    int roomNo;         };

int main() {
    struct ClassRoom rooms[10];     int i;

    printf("=== Enter ClassRoom Information ===\n");
    for (i = 0; i < 10; i++) {
        printf("\nRoom %d:\n", i + 1);

        printf("Enter Room Name: ");
        fflush(stdin); 
        fgets(rooms[i].roomName, sizeof(rooms[i].roomName), stdin);
        size_t len = strlen(rooms[i].roomName);
        if (len > 0 && rooms[i].roomName[len - 1] == '\n') {
            rooms[i].roomName[len - 1] = '\0';
        }

        printf("Enter Room No: ");
        scanf("%d", &rooms[i].roomNo);
        getchar(); 
    }

    printf("\n=== ClassRoom List ===\n");
    for (i = 0; i < 10; i++) {
        printf("Room %d -> Name: %s | No: %d\n",
               i + 1, rooms[i].roomName, rooms[i].roomNo);
    }

    return 0;
}
