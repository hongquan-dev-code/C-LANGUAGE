#include <stdio.h>
#define Pi 3.141592 // dinh nghia hang so Pi = 3.141592

int main() {
    int rad;        // khai bao bien ban kinh radius
    float area, peri; // dien tich: area , chu vi: peri

    // nhap ban kinh hinh tron
    printf("Radius: ");
    scanf("%d", &rad);

    // cong thuc S cua hinh tron: S = Pi * r * r
    area = Pi * rad * rad;

    // cong thuc tinh chu vi hinh tron: c = 2 * Pi *r
    peri = 2 * Pi * rad;

    // in ra S hinh tron
    printf("Circle Area = %f \n", area);

    // in ra chu vi hinh tron
    printf("Circle Perimeter = %f \n", peri);
}