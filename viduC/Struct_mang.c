#include<stdio.h>
#include <string.h>

struct SinhVien {
    char ten[100];
    char lop[100];
    double gpa;
};

typedef struct SinhVien SinhVien;

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    SinhVien a[n];
    for (int i = 0; i < n; i++) {
        getchar(); // bo \n sau scanf()

        printf("Nhap ten: ");
        fgets(a[i].ten, sizeof(a[i].ten), stdin);
        a[i].ten[strcspn(a[i].ten, "\n")] = '\0';   // xoa '\n'


        printf("Nhap lop: ");
        fgets(a[i].lop, sizeof(a[i].lop), stdin);
        a[i].lop[strcspn(a[i].lop, "\n")] = '\0';   // xoa '\n'


        printf("Nhap diem: ");
        scanf("%lf", &a[i].gpa);
    }

    printf("Danh sach sinh vien vua nhap: \n");
    for (int i = 0; i < n; i++) {
        printf("%s %s %.2lf\n", a[i].ten, a[i].lop, a[i].gpa);
    }
    return 0;
}