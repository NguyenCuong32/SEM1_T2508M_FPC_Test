#include<stdio.h>
#include<string.h>

int main() {
	char a[] = {'A', 'p','t','e','c','h', '\0'};
	int i = 0;
	while(i < strlen(a)) {
		printf("%c\n", a[i] );
		i++;
	}
    return 0;
}