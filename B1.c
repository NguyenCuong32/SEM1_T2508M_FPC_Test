#include<stdio.h>
void charArray()
{
    char array[6]={'A','p','t','e','c','h'};
    for (int i = 0; i < 6; i++)
    {
        printf("The element [%d] of the array is [%c]\n", i + 1, array[i]);
    }
}
int main(){
    charArray();
    return 0;
}