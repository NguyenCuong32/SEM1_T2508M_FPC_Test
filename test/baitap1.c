#include <stdio.h>
void dungfor(char array[],int n){
    int i;
    for(int i = 0;i<n;i++ ){
        printf("The element %d of the array is %c\n",i+1,array[i]);

    }
}
void dungwhile (char array[],int n){
    int i =0;
    while (i <n)
    {
        printf("The element %d of the array is %c\n",i+1,array[i]),
        i++;
    }
    
}
void dungdowhile (char array[],int n){
    int i = 0;
    do {
        printf("The element %d of the array is %c\n",i+1,array[i]);
        i++;
    }
    while (i < n);
    
}
int main(){
    char array[6]={'A', 'p', 't', 'e', 'c', 'h'};
    int choice;
    do{
        printf("MENU\n");
        printf("1.Using for\n");
        printf("2.Using while\n");
        printf("3.Using do while\n");
        printf("4.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            dungfor (array,6);
            break;
        case 2:
        dungwhile(array,6);
        break;
        case 3:
        dungdowhile(array,6);
        break;
        case 4: 
        printf("Exit\n");
        
        default:
        break;
        }

    }while(choice !=5);
    
}