#include <stdio.h>

struct ClassRoom {
    char roomName[50];
    int roomNo;
};
int main(){
	struct ClassRoom clsr;
    printf("Xin moi nhap ten lop: ");
    fgets(clsr.roomName, sizeof(clsr.roomName), stdin);
    printf("Xin moi nhap ten phong: ");
    scanf("%d", &clsr.roomNo);
	printf("roomName: %s\n", clsr.roomName);
    printf("roomNo: %d\n", clsr.roomNo);
	
}

