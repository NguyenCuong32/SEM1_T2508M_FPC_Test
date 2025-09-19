#include <stdio.h>

void display_array(char arr[], int length)
{
    int i = 0;
    while (i < length)
    {
        printf("The element %d of the array is %c\n", i+1, arr[i]);
        i++;
    }
}

int main()
{
    char arr[] = {'A', 'p', 't', 'e', 'c', 'h'};
    int length = sizeof(arr) / sizeof(arr[0]);
    display_array(arr, length);
    return 0;
}
