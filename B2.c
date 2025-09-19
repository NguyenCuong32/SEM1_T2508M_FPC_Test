#include<stdio.h>
struct ClassRoom
{
   char name[10];
   int number;  
};
int main(){
    struct ClassRoom cls = {"T2508M", 26};
    printf("Name =%s\n", cls.name);
    printf("Number =%d\n", cls.number);
}