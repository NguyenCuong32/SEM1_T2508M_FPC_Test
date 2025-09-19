#include <stdio.h>
#include <string.h>

struct ClassRoom {
    char tenlop[50];
    int thutulop;
};

int checkten(char a[], struct ClassRoom z[10], int n)
{
    for (int i=0; i < n; i++)
        if (strcmp(z[i].tenlop, a) == 0) return 0;
    return 1;
}

int checkso(int x, struct ClassRoom z[10], int n)
{
    for (int i=0; i < n; i++)
        if (z[i].thutulop == x) return 0;
    return 1;
}

int main() {
    struct ClassRoom ClassRooms[10];
    int n = 10;
    for (int i = 0; i < n; i++) 
    {
        printf("Iput %d\n",i+1);
        printf("Room Name (<50 letters): ");
        while (scanf("%49s", ClassRooms[i].tenlop) != 1 || checkten(ClassRooms[i].tenlop, ClassRooms, i)!=1)
        {
            printf("Wrong input or the name has already taked, try again: ");
            while (getchar() != '\n');
        };
        printf("Room No: ");
        while (scanf(" %d", &ClassRooms[i].thutulop) != 1 || ClassRooms[i].thutulop < 0 || checkso(ClassRooms[i].thutulop,ClassRooms,i) != 1)
        {
            printf("Wrong input or the number has already taked, try again: ");
            while (getchar() != '\n');
        };
    }
    printf("List of 10 FPT Aptech Classrooms:\n");
    for (int i = 0; i < n; i++) {
        printf("Room Name: %s\n",ClassRooms[i].tenlop);
        printf("Room No: %d\n",ClassRooms[i].thutulop);
    }
    return 0;
}