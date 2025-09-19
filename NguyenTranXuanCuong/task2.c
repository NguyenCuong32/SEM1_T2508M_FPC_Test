#include <stdio.h>
#include <string.h>

int isInt (const char *message)
{
    int check, value;
    while(1)
    {
        printf("%s", message);
        check = scanf("%d", &value);
        if (check == 1)
        {
            while(getchar() != '\n');
            return value;
        }
        else
        {
            printf("Invalid value. Please enter a number.\n");
            while(getchar() != '\n');
        }
    }
}

// 2.1 Build ClassRoom;
struct ClassRoom
{
    char RoomName[30];
    int RoomNo;
};

typedef struct ClassRoom CR;

struct AllClass
{
    CR clr[10];
    int count;
};

typedef struct AllClass Class;

// 2.2 Input;
CR crInput ()
{
    CR x;

    printf("Class Room Information: \n");

    printf("Enter Room Name: ");
    fgets(x.RoomName, sizeof(x.RoomName), stdin);
    x.RoomName[strcspn(x.RoomName, "\n")] = '\0';

    printf("Enter Room No: ");
    scanf("%d", &x.RoomNo);

    while(getchar() != '\n');
    return x;
}

Class addClassRoom (Class cls)
{
    if(cls.count < 10)
    {
        CR cr = crInput();
        cls.clr[cls.count] = cr;
        cls.count++;
        printf("Added new Class Room No %d\n", cr.RoomNo);
    }
    else
    {
        printf("Fully. Can't add new classes.\n");
    }
    return cls;
}

void printClrList (Class cls)
{
    if(cls.count == 0)
    {
        printf("There are no classes.\n");
        return;
    }
    
    printf("=====Class Room=====\n");
    for(int i = 0; i < cls.count; i++)
    {
        printf("Class %d\n", i + 1);
        printf("Room name: %s\n", cls.clr[i].RoomName);
        printf("Room No: %d\n", cls.clr[i].RoomNo);
        printf("\n");
    }  
}

int main()
{
    struct AllClass cls;
    cls.count = 0;
    int choice;

    printf("CHOICE: \n");
    printf("0. Exit the program.\n");
    printf("1. Add new Class Room.\n");
    printf("2. Display all Class Room.\n");
    
    while(1)
    {
        choice = isInt("Enter your choice(0 - 2): ");
        switch (choice)
        {
            case 0:
                printf("Exit the program.\n");
                return 0;
            case 1:
                printf("You choose option 1. Add new Class Room.\n");
                cls = addClassRoom(cls);
                break;
            case 2:
                printf("You choose option 2. Display all Class Room.\n");
                printClrList(cls);
                break;
        }
    }
    return 0;
}