#include <stdio.h>
#include <string.h>

typedef struct {
    char roomName[50];
    int roomNo;
} ClassRoom;


void displayClassRooms(ClassRoom classRooms[], int n) {
    printf("\n--- Danh sach cac phong hoc ---\n");
    for (int i = 0; i < n; i++) {
        printf("Room name: %s\n", classRooms[i].roomName);
        printf("Room no: %d\n", classRooms[i].roomNo);
    }
}

int main() {
    ClassRoom classRooms[10];
    int n = 10;

    
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin phong hoc thu %d:\n", i + 1);

        printf("Room name: ");
        fgets(classRooms[i].roomName, sizeof(classRooms[i].roomName), stdin);
        classRooms[i].roomName[strcspn(classRooms[i].roomName, "\n")] = '\0'; // xóa newline

        printf("Room no: ");
        scanf("%d", &classRooms[i].roomNo);
        getchar(); 

        printf("\n");
    }

    displayClassRooms(classRooms, n);

    return 0;
}