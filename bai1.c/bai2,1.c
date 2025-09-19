#include<stdio.h>
#include<string.h>

struct classroom {
	char name[100];
	int number;
};
typedef struct classroom room;

int main() {
	room v;
	printf("Nhap thong tin ve phong hoc :\n");
	gets(v.name);
	printf("Nhap thong tin ve so phong hoc :\n");
	scanf("%d", &v.number);
	printf("%s %d", v.name , v.number);
    return 0;
}