// hoán đổi giá trị của hai biến bằng biến tạm
#include <stdio.h>  

int main()
{
    int a = 100, b = 500;  // khai bao va gan gia tri ban dau cho a = 100, b = 500
    int tmp = 0;           // bien tam tmp dung de hoan doi gia tri
    
    // in gia tri truoc khi hoan doi
    printf("Before : a = %d   b = %d \n", a, b);
    
    // hoan doi gia tri a va b
    tmp = a;   // luu gia tri cua a vao bien tmp
    a = b;     // gan gia tri cua b cho a
    b = tmp;   // gan gia tri cua tmp (ban dau la a) cho b
    
    // in gia tri sau khi hoan doi
    printf("After : a = %d   b = %d \n", a, b);    
}
