#include<stdio.h>

int main_s() {
    int sum = 0;
    int i = 0, cnt = 0;

    do {
        sum += i;
        i++;
        cnt++;
    }while(i <= 3);
    printf("%d %d\n",sum, cnt);
}

int main() {
    int i = 0;
    do {
        printf("1- New \n");
        printf("2- Open \n");
        printf("3- Close \n");
        scanf("%d", &i);
    }while(i < 1 || i > 3);

    printf("lua chon menu = %d\n", i);
    main_s();
}