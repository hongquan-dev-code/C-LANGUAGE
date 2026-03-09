#include<stdio.h>
// stdlib.h: Thu vien chuan chua cac ham tien ich nhu rand(), srand().
#include<stdlib.h>
#include<time.h>

int main() {
    int rst;
    srand(time(NULL));
    // srand() dùng để đặt “hạt giống” (seed) cho bộ sinh số ngẫu nhiên.
    // time(NULL) trả về thời gian hiện tại (tính theo giây kể từ 1/1/1970).
    // Nhờ đó, mỗi lần chạy chương trình sẽ sinh ra dãy số khác nhau.
    // ⚠️ Lưu ý: chương trình này cần thêm `#include<time.h>` để dùng được time(NULL).

    rst = rand();
    // rand() sinh ra một số nguyên ngẫu nhiên trong khoảng từ 0 đến RAND_MAX (thường là 32767).
    // Gán giá trị đó cho biến rst.
    printf("rand = %d \n", rst);
    // In ra số ngẫu nhiên vừa được sinh.

    if(rst % 2 == 0) {
        printf("짝수 \n");
    } 
    else {
        printf("홀수 \n");
    }
}