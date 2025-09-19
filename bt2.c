#include<stdio.h>
 struct Classromm 
 {
    char rooname[20];
    int roomno;
 };
  
 int main () {
   int n;
   printf("Nhap so phong hoc: ");
    scanf("%d",&n);
    struct Classromm c[n];
    printf("Nhap ten phong hoc: \n");
    for(int i = 1; i <= n; i++) {
        scanf("%s",&c[i].rooname);
    }
    printf("Nhap so phong hoc: \n");
    for(int i = 1; i <= n; i++) {
        scanf("%d",&c[i].roomno);
    }
    
    return 0;
 }