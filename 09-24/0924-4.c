#include <stdio.h>
#include <math.h>

// ham kiem tra xem i co chia het cho 5 khong
// neu dung thi tra ve 1
int rst(int i)
{
    if(i % 5 == 0)
        return 1;
    // neu khong chia het cho 5 thi ham khong tra ve gi
    // co the them return 0 de ro rang hon
}

int main()
{
    int i;
    int rst1;

    // nhap vao 1 so nguyen i
    printf("Input : ");
    scanf("%d", &i);

    // goi ham rst de kiem tra i co chia het cho 5 khong
    rst1 = rst(i);
    
    // neu i chia het cho 3 va dong thoi chia het cho 5
    // thi in ra "la boi so cua 3 va 5"
    // nguoc lai thi in ra "khong phai"
    if((i % 3 == 0) && rst1) 
        printf("3과 5의 배수입니다 \n");
    else
        printf("3과 5의 배수가 아닙니다 \n");
}
