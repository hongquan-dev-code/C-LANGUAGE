#include<stdio.h>

int main() {
    int x = 9; //9 rong nhi phan la 1001 (4 bit)

    // dich trai
    printf("Left  %d << 1 = %d \n", x, x << 1);
    // x << 1: x << n → dịch toàn bộ bit của x sang trái n vị trí, và thêm 0 vào bên phải.
    // 1001 (9) => 10010 (18)

    // dich phai
    printf("Right  %d >> 1 = %d \n", x, x >> 1);
    // x >> 1: 
    /* x >> n → dịch toàn bộ bit của x sang phải n vị trí, và bỏ bớt bit ngoài cùng bên phải.
        Nếu là số dương → chèn thêm 0 bên trái.
        Nếu là số âm → chèn thêm 1 (để giữ dấu).*/
    // 1001 (9) => 0100 (4)

    // in duoi dang he 16 (hexadecimal)
    printf("Left  %x << 1 = %x \n", x, x << 1);
    // 9 trong he 16 van la 9, 18 trong he 16 la 12

    printf("Right  %d >> 1 = %04x \n", x, x >> 1);
    // %04x:in duoi dang he 16, du 4 chu so, them so 0 o dau neu thieu
    // 9 >> 1 = 4, in ra 0004
    return 0;

}