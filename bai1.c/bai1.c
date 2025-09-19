#include<stdio.h>
#include<string.h>

int main() {
	char a[] = {'A', 'p','t','e','c','h', '\0'};
	for(int i = 0 ; i < strlen(a) ; i++) {
		printf("“The element %d of the array is %c\n" , i , a[i]);
	}
	return 0;
}