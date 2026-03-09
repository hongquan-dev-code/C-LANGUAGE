#include<stdio.h>

int main() {
    int a, b, c, d;
    int max = 0, min = 100;

    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);
    printf("Input d: ");
    scanf("%d", &d);

    if(a > b) max = a;
    else max = b;

    if(max < c) max = c;
    if(max < d) max = d;

    if(a > b) min = b;
    else min = a;
    
    
    if(min > c) min = c;
    if(min > d) min = d;


    printf("%d %d %d %d => \n", a, b, c, d);
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    return 0;
}

