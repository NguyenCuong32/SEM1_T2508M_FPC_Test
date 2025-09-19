#include <stdio.h>
#include <string.h>

// Hàm nhập số nguyên an toàn
int isInt(const char *msg) {
    int val, check;
    while (1) {
        printf("%s", msg);
        check = scanf("%d", &val);
        if (check == 1) { while (getchar() != '\n'); return val; }
        printf("Invalid value. Please enter a number.\n");
        while (getchar() != '\n');
    }
}

// Struct ClassRoom
typedef struct {
    char RoomName[30];
    int RoomNo;
} ClassRoom;

// Struct quản lý nhiều ClassRoom
typedef struct {
    ClassRoom list[10];
    int count;
} Class;

// Nhập 1 ClassRoom
ClassRoom inputClassRoom() {
    ClassRoom cr;
    printf("\nClass Room Information:\n");
    printf("Enter Room Name: ");
    fgets(cr.RoomName, sizeof(cr.RoomName), stdin);
    cr.RoomName[strcspn(cr.RoomName, "\n")] = '\0';
    cr.RoomNo = isInt("Enter Room No: ");
    return cr;
}

// Thêm ClassRoom vào danh sách
void addClassRoom(Class *cls) {
    if (cls->count >= 10) {
        printf("List full. Can't add more.\n");
        return;
    }
    cls->list[cls->count] = inputClassRoom();
    printf("Added new Class Room No %d\n", cls->list[cls->count].RoomNo);
    cls->count++;
}

// In danh sách ClassRoom
void printClassRooms(const Class *cls) {
    if (cls->count == 0) {
        printf("There are no classes.\n");
        return;
    }
    printf("\n===== Class Room List =====\n");
    for (int i = 0; i < cls->count; i++) {
        printf("Class %d - Name: %s - No: %d\n",
               i + 1,
               cls->list[i].RoomName,
               cls->list[i].RoomNo);
    }
}

int main() {
    Class cls = { .count = 0 };
    int choice;

    printf("CHOICE:\n0. Exit\n1. Add Class Room\n2. Show Class Rooms\n");

    while (1) {
        choice = isInt("Enter your choice (0-2): ");
        if (choice == 0) { printf("Exit.\n"); break; }
        else if (choice == 1) addClassRoom(&cls);
        else if (choice == 2) printClassRooms(&cls);
        else printf("Invalid choice.\n");
    }
    return 0;
}
