// kiem tra so chan hay le
#include <stdio.h>  

int main()
{
    int in_val, rst;   // in_val: so nhap vao, rst: phan du khi chia cho 2

    // nhap mot so nguyen
    printf("Input : ");    
    scanf("%d", &in_val);

    // tinh phan du khi chia 2
    rst = in_val % 2;

    // neu phan du = 0 thi la so chan
    if(rst == 0)
    {
        printf("%d la so chan\n", in_val);
    }
    // nguoc lai la so le
    else
    {
        printf("%d la so le\n", in_val);
    }
}
