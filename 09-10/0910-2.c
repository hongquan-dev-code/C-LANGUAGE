#include <stdio.h>

void main()
{
    // Khai bao cac bien so nguyen
    int days;       // so ngay-di du lich
    int air_p;      // gia ve may bay
    int htl_p;      // gia khach san moi ngay
    int yong_p;     // so tien chi tieu moi ngay
    int total = 0;  // tong chi phi (khoi tao = 0)

    // Nhap so ngay
    printf("Daynight: ");
    scanf("%d", &days);

    // Nhap gia ve may bay
    printf("Air Price : ");
    scanf("%d", &air_p);

    // Nhap gia khach san moi ngay
    printf("Hotel Price : ");
    scanf("%d", &htl_p);

    // Nhap so tien chi tieu moi ngay
    printf("Day Spent Mny : ");
    scanf("%d", &yong_p);

    // In duong ke phan cach
    printf("====================================\n");

    // Tinh tong chi phi: ve may bay + (khach san + chi tieu) * so ngay
    total = air_p + (htl_p + yong_p) * days;

    // In ket qua
    printf("Total Price = %d \n", total);

    // In duong ke ket thuc
    printf("====================================\n");
}
