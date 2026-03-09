#include<stdio.h>

int main() {
    int i1, i2;
    double f1, f2;

    f1 = 5 / 4;
    printf("Before Rst = %f\n", f1);

    f2 = (double)5 / 4;
    printf("Rst = %f\n", f2);

    i1 = 1.3 + 1.8;
    printf("Before Rst = %d\n", i1);

    i2 = (int)1.3 + (int)1.8;
    printf("Int Rst = %d\n", i2);
}