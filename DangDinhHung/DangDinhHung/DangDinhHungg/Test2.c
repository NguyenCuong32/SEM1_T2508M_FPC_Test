#include<stdio.h>

struct ClassRoom {
    char roomName[50]; 
    int roomNo;        
};

void displayClassRooms(struct ClassRoom arr[], int n) {
    printf("list of classrooms:\n");
    for (int i = 0; i < n; i++) {
        printf("Room name: %s, Room No: %d\n", arr[i].roomName, arr[i].roomNo);
    }
}

int main() {
    struct ClassRoom classRooms[10];
    int n;

    printf("Enter number of classrooms (max 10): ");
    scanf("%d", &n);

    if (n > 10) n = 10; 

    for (int i = 0; i < n; i++) {
        printf("\nEnter information for classroom %d:\n", i + 1);
        printf("Room name: ");
        scanf("%s", classRooms[i].roomName);  
        printf("Room No: ");
        scanf("%d", &classRooms[i].roomNo);
    }

   
    displayClassRooms(classRooms, n);

    return 0;
}
