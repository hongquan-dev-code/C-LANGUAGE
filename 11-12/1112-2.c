#include <stdio.h>
#include <math.h>

int read_int() {
    int in_val;
    printf("Input: ");
    scanf("%d", &in_val);

    return in_val;
}

int add(int a, int b) {
    int sum = 0;
    for(int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}

int bigger(int ina, int inb) {
    if(ina > inb) {
        return ina;
    }
    else {
        return inb;
    }
}

int mul(int ina, int inb) {
    return pow(ina, inb);
}

int main() {
    int ina, inb, sum = 0;
    int max;
    int rst;

    ina = read_int();
    inb = read_int();

    sum = add(ina, inb);
    printf("sum = %d\n", sum);

    max = bigger(ina, inb);
    printf("max = %d\n", max);

    rst = mul(ina, inb);
    printf("rst = %d\n", rst);
    return 0;
}