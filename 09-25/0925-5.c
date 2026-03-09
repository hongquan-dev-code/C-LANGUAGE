#include<stdio.h>

int main() {
    int a, b;
    int rst = 0;
    char op;

    printf("Input: ");
    scanf("%d %c %d", &a, &op, &b);

    if(op == '+') {
        rst = a + b;
    }
    else if(op == '-') {
        rst = a - b;
    }
    else if(op = '*') {
        rst = a * b;
    }
    else if(op = '/') {
        rst = a / b;
    }
    printf("Rst = %d \n", rst);
}