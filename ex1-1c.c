#include<stdio.h>
int main(){
    char array[6] = {'A','p','t','e','c','h'};
    int size = 6;
    int i= 0;
    do{
         printf("the element %d of array is: %c\n",i + 1, array[i] );
         i++;
    } while(i<size);
return 0;
}