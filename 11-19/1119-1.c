#include <stdio.h>
#include <string.h>

struct sinhVien {
    int num;
    char name[10];
    double gpa;
};
typedef struct sinhVien sinhVien;

int main() {
    sinhVien sv;

    sv.num = 134243;
    strcpy(sv.name, "ok"); // strcpy: gan chuoi(sao chep chuoi)
    sv.gpa = 3.5;

    printf("%d %s %.2lf\n", sv.num, sv.name, sv.gpa);

    return 0;
}
