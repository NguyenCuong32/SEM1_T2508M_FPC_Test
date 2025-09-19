#include <stdio.h>
#include <string.h>
struct ClassRoom {
    char room_name[50];
    int room_no;
};
void displayClassRooms(struct ClassRoom classrooms[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Room name: %s\n", classrooms[i].room_name);
        printf("Room no: %d\n", classrooms[i].room_no);
    }
}
int main() {
    struct ClassRoom classrooms[10];
    int num_classrooms = 10;
    for (int i = 0; i < num_classrooms; i++) {
        printf("Enter information for Classroom %d:\n", i + 1);
        printf("Enter Room name: ");
        fgets(classrooms[i].room_name, sizeof(classrooms[i].room_name), stdin);
        classrooms[i].room_name[strcspn(classrooms[i].room_name, "\n")] = 0;
        
        printf("Enter Room no: ");
        scanf("%d", &classrooms[i].room_no);
        getchar(); 
        
        printf("\n");
    }
    printf("\nClassroom Information:\n");
    displayClassRooms(classrooms, num_classrooms);

    return 0;
}