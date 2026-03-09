#include<stdio.h>
#define  PI 3.141592
#include "1015-11.h"

int main() {
    double rt, rad;
    int ok;

    printf("Input rad: ");
    scanf("%lf", &rad);

    rt = PI * rad * rad;

    printf("%lf \n", rt);

    ok = sums();

    printf("%d\n", ok);
}