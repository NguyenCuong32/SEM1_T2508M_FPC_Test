#include<stdio.h>
#include<string.h>
int main() {
    char a[] = {'A', 'p','t','e','c','h', '\0'};
    printf("%d\n", strlen(a));
    for(int i = 0 ; i < strlen(a) ; i++) {
    	printf("%c\n",a[i]);
	}
}