#include<stdio.h>

int main() {
    int in_a, in_b, in_c;
    int max = 0, min = 100;

    // nhap 3 so
    printf("Input: "), scanf("%d", &in_a);
    printf("Input: "), scanf("%d", &in_b);
    printf("Input: "), scanf("%d", &in_c);

    // tim so lon nhat
    //  So sánh in_a và in_b, gán giá trị lớn hơn cho max
    if(in_a > in_b)
        max = in_a;
    else
        max = in_b;

    // So sánh max hiện tại với in_c, nếu in_c lớn hơn thì cập nhật lại max
    if(max < in_c)
        max = in_c;
    
    // Tìm số nhỏ nhất
    // So sánh in_a và in_b, gán giá trị nhỏ hơn cho min
    if(in_a > in_b)
        min = in_b;
    else  
        min = in_a;

    // So sánh min hiện tại với in_c, nếu in_c nhỏ hơn thì cập nhật lại min
    if(min > in_c)
        min = in_c;
    
    printf("%d %d %d -> so lon nhat: %d\n", in_a, in_b, in_c, max);
    printf("So nho nhat: %d\n", min);
     return 0;
}