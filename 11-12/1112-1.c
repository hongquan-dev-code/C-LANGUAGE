#include <stdio.h>
int read_int() {
    int in_val;
    printf("Input: ");
    scanf("%d", &in_val);

    return in_val;
}

void plus_cal() {
    int a = 100;
    int b = 200;
    printf("sum = %d\n", a + b);
}
int main() {
    int ina;
    ina = read_int();
    printf("입력된 값은: %d\n", ina);

    plus_cal();
    return 0;
}