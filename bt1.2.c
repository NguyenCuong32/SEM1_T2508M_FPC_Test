
#include <stdio.h>

int find_position(char arr[], int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ch)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int pos = find_position(Array, 6, 'p');

    if (pos != -1)
        printf("The position of 'p' is %d\n", pos);
    else
        printf("Character not found!\n");

    return 0;
}
