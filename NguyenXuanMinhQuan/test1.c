#include <stdio.h>
int main () {
    int i;
int A[6]={'A', 'p', 't','e', 'c', 'h'};
printf("Dung ham for: \n ");
for(i=0; i<6; i++) {
printf("Phan tu thu %d cua mang la: %c\n", i+1, A[i] );

}
printf ("Dung ham while \n");
int a = 0;
while (a < 6) {
printf("Phan tu thu %d cua mang la: %c\n", a+1, A[a]);
a++;
}
printf ("Dung do while \n");
int j=0;
do {
    printf ("Phan tu thu %d cua mang la: %c\n", j+1, A[j]);
    j++;
} while (j<6);

}
