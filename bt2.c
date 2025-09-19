#include <stdio.h>
#include <string.h>
struct ClassRoom
{
    char roomName[20];
    int roomNo;
};
int main()
{
    struct ClassRoom ClassRooms[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Nhap ten phong cho lop hoc %d:", i + 1);
        fgets(ClassRooms[i].roomName, sizeof(ClassRooms[i].roomName), stdin);
        ClassRooms[i].roomName[strcspn(ClassRooms[i].roomName, "\n")] = '\0';

        printf("Nhap so phong cho lop hoc:");
        scanf("%d", &ClassRooms[i].roomNo);
        getchar();

        printf("Thong tin lop hoc: \n");
        printf("Ten phong: %s\n", ClassRooms[i].roomName);
        printf("So phong: %d\n", ClassRooms[i].roomNo);
    }

    return 0;
}
