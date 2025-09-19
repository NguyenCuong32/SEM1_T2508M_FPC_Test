#include <stdio.h>
struct Classrooms {
char room_name[50];
int room_no;
};
int main () {
    int n;
    printf ("Tong cac phong hoc la:");
    if (scanf("%d", &n) !=1) return 0;

    struct Classrooms classroom [n];
    for (int i=0; i<n; i++) {
        printf ("Nhap thong tin phong hoc thu %d: \n", i+1);
        printf ("Room name: ");
        scanf("%s", &classroom [i].room_name);
        printf("Room no:");
        scanf ("%d", &classroom [i].room_no);
    

    }
    return 0;
}
