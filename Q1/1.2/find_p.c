#include <stdio.h>

void display_array(char arr[], int length)
{
    for (int i=0; i<length; i++)
    {
        if (arr[i] == 'p')
        {
            printf("Char `%c` is in position %d\n", arr[i], i);
        }
    }
}

int main()
{
    char arr[] = {'A', 'p', 't', 'e', 'c', 'h'};
    int length = sizeof(arr) / sizeof(arr[0]);
    display_array(arr, length);
    return 0;
}
