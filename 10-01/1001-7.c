#include<stdio.h>

int main() {
    int i = 1, sum =0, in_val;

    printf("Input: "), scanf("%d", &in_val);

    while(i <= in_val) {
        sum += i;
        i++;
    }
    printf("%5d   \n", sum);
}