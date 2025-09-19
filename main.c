
#include <stdio.h>

void bai1_1()
{
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    printf("Vong Lap For\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%c ", Array[i]);
    }

    printf("\nVong Lap While\n");
    int j = 0;
    while (j < 6)
    {
        printf("%c ", Array[j]);
        j++;
    }
    printf("\nVong Lap Do While\n");
    int k = 0;
    do
    {
        printf("%c ", Array[k]);
        k++;
    } while (k < 6);
}

void bai1_2()
{
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    for (int i = 0; i < 6; i++)
    {
        if (Array[i] == 'p')
        {
            printf("\nHien P Ra : %c \n", Array[i]);
        }
    }
}

struct ClassRoom
{
    char roomName[100];
    int roomNo;
};

void bai2_1()
{
    struct ClassRoom cr = {};
    printf("Nhap Ten Phong: ");
    scanf("%99s", cr.roomName);
    printf("Nhap So Phong: ");
    scanf("%d", &cr.roomNo);
    printf("\nRoom name: %s\nRoom no: %d\n", cr.roomName, cr.roomNo);
}

struct ClassRoom arr[3];

void bai2_3()
{
    printf("\n");
    
    for (int i = 0; i < 3; i++)
    {
        if (arr[i].roomNo == 0)
        {
            printf("Phong %d chua duoc nhap.\n", i + 1);
            continue;
        }
        else
        {
            printf("Ten Phong: %s\n", arr[i].roomName);
            printf("So Phong: %d\n", arr[i].roomNo);
        }
    }
    printf("\n");
}

void bai2_2()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Nhap Ten Phong %d: ", i + 1);
        scanf("%99s", arr[i].roomName);
        printf("Nhap So Phong %d: ", i + 1);
        scanf("%d", &arr[i].roomNo);
    }

    printf("\n");

    bai2_3();
}

int main()
{
    while (1)
    {
        int nhap;
        printf("1. Bai 1.1\n2. Bai 1.2\n3. Bai 2.1\n4. Bai 2.2\n5. Bai 2.3\nNhap Lua Chon: ");
        scanf("%d", &nhap);

        switch (nhap)
        {
        case 1:
            bai1_1();
            break;

        case 2:
            bai1_2();
            break;

        case 3:
            bai2_1();
            break;

        case 4:
            bai2_2();
            break;
        case 5:
            bai2_3();
            break;

        default:
            break;
        }
    }
}