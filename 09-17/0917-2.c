// dien tich hinh tron su dung kieu du lieu double
#include <stdio.h>     
#define PI 3.141592    // hang so PI (so Pi)

int main()
{
    double rad;        // bien ban kinh (radius), dung kieu double de tinh toan chinh xac hon
    double area = 0;   // bien dien tich (area), gan gia tri ban dau = 0

    // nhap ban kinh tu ban phim
    printf("Input : ");     
    scanf("%lf", &rad);    // %lf dung de nhap so thuc kieu double
    
    // cong thuc tinh dien tich hinh tron: S = PI * r^2
    area = rad * rad * PI;
    
    // in ket qua dien tich
    printf("Area = %lf \n", area);   // %lf dung de in so thuc kieu double
}

