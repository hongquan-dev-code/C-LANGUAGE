#include <stdio.h>

int main() {
    double in_val;
    double sum = 0;

    for(int i = 0; i < 10; i++) {
        printf("Input: ");
        scanf("%lf", &in_val);

        if (in_val < 0) {
            break;
        }
        sum += in_val;
    } printf("%lf", sum);
}