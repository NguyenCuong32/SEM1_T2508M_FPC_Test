#include<stdio.h>
int main(){
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int i =0;

    while (i < 6)
    {
        printf("The elemnt %d of the array is %c\n", i, Array[i]);
        i++;
    }
}