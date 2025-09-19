#include<stdio.h>
 int main(){
    char array [6]={'A','p','t','e','c','h'};
    int i;
    printf("Task 1.1\n");
    printf("using for loop\n");
    for(i=0;i<6;i++){
        printf("The element %d of the array ist %c.\n", i+1,array[i]);
    }
    printf("using while\n");
    i=0;
    while(i<6){
        printf("The element %d of the array ist %c.\n", i+1,array[i]);
        i++;
    }   
    printf("using do while\n");
    i=0;
    do{
        printf("The element %d of the array ist %c.\n", i+1,array[i]);
        i++;
    }while(i<6);
    return 0;  
 }