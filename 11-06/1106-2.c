#include <stdio.h>

int main() {
    int arr[] = {20, 30, 70, 80};
    int *p;

    p = arr;

    printf("%d %d %d %d \n", arr[0], arr[1], arr[2], arr[3]);
    printf("%d %d %d %d \n", *(p), *(p + 1), *(p + 2), *(p + 3));
    printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);

    return 0;
}