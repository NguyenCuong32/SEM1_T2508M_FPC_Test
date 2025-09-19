#include<stdio.h>
struct classroom
{
    char name[50];
    float score;

};
int main()
{
    struct classroom clr ;
    printf("Name class:%s\n",clr.name);
   scanf("%s",&clr.name);
    printf("Score:%2f\n",clr.score);
    scanf("%f",&clr.score);
    printf("Name:%s\n",clr.name);
    printf("Socer:%.2f\n",clr.score);

}