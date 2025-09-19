#include<stdio.h>
int find_p(char arr[], int n, char t){
    for (int i = 0; i < n; i++) {
        if(arr[i] == t) {
            return i ;
        }
    }
    return -1;
}
int main() {
    char array[6] = {'A','p','t','e','c','h'};
    int n = 6;
/*  Dung ham for
    for (int i = 0; i < n; i++) {
        printf("The element %d of the array is %c\n",i,array[i]);
    }
        
        int i = 0;
        
    Dung ham while 
       while (i < n) {
printf("The element %d of the array is %c\n",i,array[i]);
    i++;
       }
    
       Ham do while:
    do {
        printf("The element %d of the array is %c\n",i,array[i]);
        i++;
    } while ( i < n );
     */
    char t = 'p';
    int pos = find_p(array, n,t);
    if (pos != -1)
        printf("\nThe character '%c' is at position %d\n", t, pos);
    else
        printf("\nThe character '%c' is not found\n",t);

    return 0;
}