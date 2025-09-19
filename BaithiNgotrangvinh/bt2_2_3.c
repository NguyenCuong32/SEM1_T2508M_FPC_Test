#include <stdio.h>

struct ClassRoom {
    char roomName[50];
    int roomNo;
};

int main() {
    struct ClassRoom ClassRooms[10];

    for (int i = 0; i < 10; i++) {
        printf("Xin moi nhap ten phong %d: ", i + 1);
        scanf("%s", ClassRooms[i].roomName);
        printf("Xin moi nhap so phong %d: ", i + 1);
        scanf("%d", &ClassRooms[i].roomNo);
    }
    printf("\n--- ClassRoom ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Ten phong: %s\n", ClassRooms[i].roomName);
        printf("So phong: %d\n", ClassRooms[i].roomNo);
    }

    return 0;
}
