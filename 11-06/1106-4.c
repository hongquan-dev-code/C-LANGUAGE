#include <stdio.h>

int main() {
    int arr[] = {20, 30, 70, 80};
    int *p;
    int sum = 0;
    int size;

    p = arr;

    size = sizeof(arr) / sizeof(arr[0]);

    printf("Array = [");
    for (int i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    printf("]\n");
 
    for (int i = 0; i < size; i++) {
        sum += *(p + i);
    }
    printf("Sum = %d \n", sum);
    return 0;
}