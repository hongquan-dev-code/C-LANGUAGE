#include<stdio.h>

int main() {
    int i, n, so, sum = 0, fact = 1;

    while(1) {
        printf("1-합계 2-팩터리얼 3-종료 선택: ");
        scanf("%d", &so);

        if(so == 3) break;

        printf("Input: ");
        scanf("%d", &n);

        if(so == 1) {
            for (i = 1; i <= n; i++) {
                sum += i;
            }
            printf("sum = %d\n", sum);
        }
        else if(so == 2) {
            for (i = 1; i <= n; i++) {
                fact *= i;
            }
            printf("fact = %d\n", fact);
        }
    }
    return 0;
}