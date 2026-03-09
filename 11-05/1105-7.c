#include <stdio.h>

void swap(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int swaps(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main() {
    int a = 10, b = 20;

    printf("Call by value\n");
    printf("Before: a = %d  b = %d\n", a, b);
    swap(a, b);
    printf("After: a = %d  b = %d\n", a, b);

    printf("Call by reference\n");
    printf("Before: a = %d  b = %d\n", a, b);
    swaps(&a, &b);
    printf("After: a = %d  b = %d\n", a, b);
}