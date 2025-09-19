#include <stdio.h>
#include <string.h>


struct ClassRoom {
    char roomName[50];
    int roomNo;
};


void inputClassRooms(struct ClassRoom cls[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nEnter information for ClassRoom %d\n", i + 1);

        printf("Room name: ");
        fflush(stdin);
        fgets(cls[i].roomName, sizeof(cls[i].roomName), stdin);
    
        size_t len = strlen(cls[i].roomName);
        if (len > 0 && cls[i].roomName[len - 1] == '\n') {
            cls[i].roomName[len - 1] = '\0';
        }

        printf("Room no: ");
        scanf("%d", &cls[i].roomNo);
        getchar(); 
        
        printf("\n--- ClassRoom just created ---\n");
        printf("Room name: %s\n", cls[i].roomName);
        printf("Room no: %d\n", cls[i].roomNo);
    }
}

void displayClassRooms(struct ClassRoom cls[], int n) {
    int i;
    printf("\n=== List of All ClassRooms ===\n");
    for (i = 0; i < n; i++) {
        printf("Room name: %s\n", cls[i].roomName);
        printf("Room no: %d\n", cls[i].roomNo);
    }
}

int main() {
    struct ClassRoom classRooms[10];
    int n = 10; 

    inputClassRooms(classRooms, n);  
    displayClassRooms(classRooms, n); 

    return 0;
}