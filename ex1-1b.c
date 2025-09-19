#include<stdio.h>
int main(){
 char array[6] =   {'A','p','t','e','c','h'};
int size = 6;
int i =0;
while(i<size){
     printf("the element %d of array is: %c\n",i + 1, array[i] );
     i++;
}
return 0;
}