#include <stdio.h>
int main()
{
    char array [6]={'A','p','t','e','c','h'};
    int i=0;
    do
    {
         printf("the elenmeb %d of the array is %c \n",i+1,array[i]);
         i++;
    }while (i<6);
    return 0;
}