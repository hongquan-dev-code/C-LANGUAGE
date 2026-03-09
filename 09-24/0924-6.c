#include<stdio.h>
#include<math.h>

int main() {
    int small, big;
    int x, y;

    printf("Input: "),scanf("%d", &x);
    printf("Input: "),scanf("%d", &y);
    
    /* toan tu 3 ngoi duoc dung de so sanh
       Cau truc: (dieu kien) ? gia tri neu dung : gia tri neu sai */
    big = (x > y) ? x : y;
    small = (x < y) ? x : y;

    printf("Big = %d \n", big);
    printf("Small = %d \n", small);
}
