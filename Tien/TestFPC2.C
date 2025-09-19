#include <stdio.h>
typedef struct {
    char roomName[50];
    int roomNo;
} ClassRoom;
int main(void) {
    ClassRoom classes[10] = {
        {"Windows", 1}, {"DotNet", 2}, {"Java", 3},
        {"Python", 4}, {"C", 5}, {"C++", 6},
        {"PHP", 7}, {"Database", 8}, {"AI", 9},
        {"JavaScript", 10}
    };
    for (int i = 0; i < 10; i++) {
        printf("Tên Phòng: %s\n", classes[i].roomName);
        printf("Số phòng: %d\n", classes[i].roomNo);
    }
    return 0;
}
