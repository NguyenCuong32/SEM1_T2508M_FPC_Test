#include<stdio.h>
struct lophoc {
    char ten[50];
    int no;
};
int main() {
    struct lophoc lop[10];
    for (int i = 0; i < 10; i++) {
        printf("Nhap ten phong hoc thu %d: ", i + 1);
        scanf("%s", lop[i].ten);
        lop[i].no = i + 1;
    }
    printf(" Danh sach lop hoc");
    for (int i = 0; i < 10; i++) {
        printf("lop ten: %s\n", lop[i].ten);
        printf("lop no: %d\n\n", lop[i].no);
    }

    return 0;
}