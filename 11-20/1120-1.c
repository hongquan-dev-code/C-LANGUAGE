#include <stdio.h>

struct point {
    int x; //hoành độ
    int y; //tung độ
};

struct rect {
    struct point p1;
    struct point p2;
};

// Tính chiều rộng, chiều cao, diện tích, chu vi từ tọa độ nhập vào.
int main(void) {
    struct rect r; //r: hinh chu nhat
    int w, h, area, peri; //w: chieu rong, h: chieu cao, area: dien tich, peri: chu vi

    printf("왼쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    printf("오른쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;
    area = w * h;
    peri = 2 * (w + h);

    printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
}
