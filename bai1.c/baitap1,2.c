#include<stdio.h>
#include<string.h>

int main() {
	char a[] = {'A', 'p','t','e','c','h', '\0'};
	int i = 0;
	do {
		printf(" The element %d of the array is %c\n" , i ,  a[i]);
		i++;
	}while(i < strlen(a));
    return 0;
}