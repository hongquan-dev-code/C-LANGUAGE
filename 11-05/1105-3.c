#include <stdio.h>

int main() {
    int x = 100;
    int *y;

    y = &x;

    printf("%d  %d\n", y, &x);
}