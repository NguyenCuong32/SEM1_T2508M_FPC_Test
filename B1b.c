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
    while(1)
    {
       int choice;
       printf("Nhap vao lua chon cua ban\n");
       scanf("%d", &choice);
       printf("1. Goi ham charArray\n");
       switch(choice)
       {
        case 1: 
        charArray();
        break;
        default:
        charArray();
        break;
       } 
    }
    return 0;
}