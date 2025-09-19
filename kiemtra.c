// bai 1
/*#include <stdio.h>

char array_key(char arr[], int n, char t ){
   for (int i = 0; i < n; i++)
   {
    if (arr[i] == t)
    {
        return i ;
    }
   }return -1;
   
}


int main (){
    char arr[6] ={'A','p','t','e','c','h'};
    int n =6;*/
   /*for (int i = 0; i < 6; i++)
    {
        printf("The element %d of the array is :%c\n",i,arr[i]);

    }return 0;
    
   int i =0;
   do
   {
    printf("The element %d of the array is :%c\n",i,arr[i]);
    i++;
   } while (i<6);

   while (i<6)
   {
    printf("The element %d of the array is :%c\n",i,arr[i]);
    i++;
   }*/
  /*char t ='p';
  char a = array_key(arr,n,t);
  if ( a != -1)
  {

    printf(" the char 'p' and display position to screen. ");
    
  }else{
    printf(" the char 'p' no display position to screen. ");
  }
  
  
    return 0;
   
}*/
//bai2
#include<stdio.h>
struct Classroom
{
    char Roomname;
    int RoomNo;
};

int main(){
    /*struct Classroom std;
    printf("Nhap lop hoc: ");    
    scanf("%s",&std.Roomname);
    printf("Nhap so phong: ");
    scanf("%d",&std.RoomNo);*/

    int n =10;
    printf("nhap so lop va so phong: ");
    scanf("%d",&n);
    
    struct Classroom std;
    
    printf("Nhap lop : ");
    for (int i = 1; i <= n; i++)
    {
        scanf("%s",&std.Roomname);
    }
        
    printf("Nhap so phong: ");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&std.RoomNo);
    }

}



