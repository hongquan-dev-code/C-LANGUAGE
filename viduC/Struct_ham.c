#include<stdio.h>
#include <string.h>

struct SinhVien {
    char ten[100];
    char lop[100];
    double gpa;
};

typedef struct SinhVien SinhVien;
SinhVien nhap();
void in();

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    SinhVien a[n];
    for (int i = 0; i < n; i++) {
        getchar(); // bo \n sau scanf()
        a[i] = nhap();
    }

    printf("Danh sach sinh vien vua nhap: \n");
    for (int i = 0; i < n; i++) {
        in(a[i]);  
    }
    return 0;
}

// ham nhap thong tin sinh vien va tra ve thong tin sinh vien
SinhVien nhap() {
    SinhVien x;
    printf("Nhap ten: ");
    fgets(x.ten, sizeof(x.ten), stdin);
    x.ten[strcspn(x.ten, "\n")] = '\0';   // xoa '\n'

    printf("Nhap lop: ");
    fgets(x.lop, sizeof(x.lop), stdin);
    x.lop[strcspn(x.lop, "\n")] = '\0';   // xoa '\n'

    printf("Nhap diem: ");
    scanf("%lf", &x.gpa);

    return x;
}

void in(SinhVien x) {
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}