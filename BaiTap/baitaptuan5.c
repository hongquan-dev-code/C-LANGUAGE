#include<stdio.h>

int main() {
    int a, b;
    int sum = 0;
   
    printf("초기 입력 : ");
    scanf("%d", &a);


    printf("말기 입력 : ");
    scanf("%d", &b);

    for(int i = a; i <= b; i++) {
        sum += i;
    }
    printf("=================\n");
    printf("합계 : %d\n", sum);
    return 0;
}
