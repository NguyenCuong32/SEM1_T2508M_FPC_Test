#include <stdio.h>
#include <string.h>

struct ClassRoom {
    char roomName[50];   // Tên phòng
    int roomNo;          // Số phòng
};

int main() {
    struct ClassRoom c1;

   
    printf("Enter Room Name: ");
    fgets(c1.roomName, sizeof(c1.roomName), stdin);
    // xóa ký tự xuống dòng nếu có
    size_t len = strlen(c1.roomName);
    if (len > 0 && c1.roomName[len - 1] == '\n') {
        c1.roomName[len - 1] = '\0';
    }

    printf("Enter Room No: ");
    scanf("%d", &c1.roomNo);

      printf("\n---- Class Room Information ----\n");
    printf("Room Name: %s\n", c1.roomName);
    printf("Room No: %d\n", c1.roomNo);

    return 0;
}
