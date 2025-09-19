#include <stdio.h>

struct ClassRoom {
    char Roomname[50];
    int Roomno;
};
int hienthids(struct ClassRoom rooms[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Nhap ten phong thu %d: ", i+1);
        scanf("%s", rooms[i].Roomname);

        printf("Nhap so phong thu %d: ", i+1);
        scanf("%d", &rooms[i].Roomno);
    }
    return n;
}

int hienthisophong(struct ClassRoom rooms[], int n) {
    int i;
    printf("Danh sach cac phong\n");
    for(i = 0; i < n; i++) {
        printf("Phong %d , Ten: %s\n, So: %d\n", i+1, rooms[i].Roomname, rooms[i].Roomno);
    }
    return 0;
}

int main() {
    struct ClassRoom classRooms[10];
    int n;
  n = hienthids(classRooms, 10);  
    hienthisophong(classRooms, n);      

    return 0;
}



