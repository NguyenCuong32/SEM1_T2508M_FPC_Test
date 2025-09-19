#include <stdio.h>

// Define struct for ClassRoom
struct ClassRoom {
    char roomName[50];
    int roomNo;
};

// Function to display all classrooms
void displayClassRooms(struct ClassRoom classRooms[], int n) {
    printf("\n===== Classroom Information =====\n");
    for (int i = 0; i < n; i++) {
        printf("Room name: %s\n", classRooms[i].roomName);
        printf("Room no: %d\n\n", classRooms[i].roomNo);
    }
}

int main() {
    struct ClassRoom classRooms[10];  // array of 10 classrooms

    // Input info for 10 classrooms
    for (int i = 0; i < 10; i++) {
        printf("Enter information for classroom %d:\n", i + 1);

        printf("Room name: ");
        scanf(" %[^\n]", classRooms[i].roomName);

        printf("Room no: ");
        scanf("%d", &classRooms[i].roomNo);
    }

    // Display all classrooms
    displayClassRooms(classRooms, 10);

    return 0;
}
