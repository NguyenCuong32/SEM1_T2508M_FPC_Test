#include <stdio.h>

int position(char z, char a[],int n)
{
    for (int i=0; i < n; i++)
        if (a[i] == z) return i+1;
    return 0;
}

int main()
{
    char array[6]={'A','P','T','E','C','H'};
    int select, i;
    printf("1. Display on screen using for\n2. Display on screen using while\n3. Display on screen using do while\n");
    printf("Select number: \n");
    while (scanf(" %d", &select) != 1 || select < 1 || select > 3)
    {
        printf("Wrong input, please select again:\n");
        while (getchar() != '\n');
    }
    switch (select)
    {
    case 1:
        for (i = 0; i < 6; i++)
            printf("The element %d of the array is %c\n", i+1, array[i]);
        break;
    case 2:
        i = 0;
        while (i < 6)
        {
            printf("The element %d of the array is %c\n", i+1, array[i]);
            i++;
        }
        break;
    case 3:
        i = 0;
        do
        {
            printf("The element %d of the array is %c\n", i+1, array[i]);
            i++;
        } while (i < 6);
        break;
    default:
        break;
    }
    printf("The 'P' letter is at the position %d\n", position('P',array,6));
    return 0;
}