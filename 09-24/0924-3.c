#include <stdio.h>

int main() {
    int temp;

    printf("Input: ");
    scanf("%d", &temp);

    if(temp > 0)
        printf("영상의 날씨입니다\n");
    else
        printf("영하의 날씨입니다\n");

    printf("현제 온도는 %d도입니다\n", temp);
}