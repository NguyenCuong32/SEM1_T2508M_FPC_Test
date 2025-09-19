#include <stdio.h>

int findIndexP (char array[], int n)
{
    int index;
    for(int i = 0; i < n; i++)
    {
        if(array[i] == 'p')
        {
            index = i;
        }
    }
    return index;
}

int main()
{
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int n = sizeof(Array) / sizeof(Array[0]);

    printf("Task 1.1\n");

    printf("a. Using for loop.\n");
    for(int i = 0; i < n; i++)
    {
        printf("The element %d of the array is %c\n", i + 1, Array[i]);
    }
    printf("\n");

    printf("b. Using while loop.\n");
    int i = 0;
    while (i < n)
    {
        printf("The element %d of the array is %c\n", i + 1, Array[i]);
        i++;
    }
    printf("\n");

    printf("c. Using do-while loop.\n");
    int j = 0;
    do 
    {
        printf("The element %d of the array is: %c\n", j + 1, Array[j]);
        j++;
    }
    while (j < 6);
    printf("\n");

    printf("Task 1.2\n");
    printf("The position of character 'p' is : %d\n", findIndexP(Array, n));
    return 0;
}