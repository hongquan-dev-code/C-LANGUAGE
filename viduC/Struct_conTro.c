#include <stdio.h>
#include <string.h>

struct SinhVien {
    char ten[100];
    char lop[100];
    double gpa;
};

typedef struct SinhVien SinhVien;

int main() {
    SinhVien x;
    strcpy(x.ten, "nguyen hong quan");
    strcpy(x.lop, "9a");
    x.gpa = 99.9;

    SinhVien *p = &x;

    // 2 kieu in kieu con tro trong struct
    printf("%s %s %.2lf\n", p->ten, p->lop, p->gpa);
    printf("%s %s %.2lf\n", (*p).ten, (*p).lop, (*p).gpa);

    return 0;
}