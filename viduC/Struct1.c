#include<stdio.h>

struct SinhVien {
    char ten[100];
    char lop[100];
    double gpa;
};

typedef struct SinhVien SinhVien;

int main() {
    SinhVien x;
    printf("moi nhap ten cua ban: ");
    fgets(x.ten, sizeof(x.ten), stdin);

    printf("moi nhap lop cua ban: ");
    fgets(x.lop, sizeof(x.lop), stdin);

    printf("moi nhap diem gpa: ");
    scanf("%lf", &x.gpa);

    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);

    // gan trong struct
    SinhVien y = x;
    printf("%s %s %.2lf", y.ten, y.lop, y.gpa);
    return 0;
}