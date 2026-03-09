#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p;
    int size;

    p = arr;
    size = sizeof(arr) / sizeof(arr[0]);

    printf("\n Pointer:  ");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n Array :  ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}