#include <stdio.h>

void nhapMang(int *p, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
}

void inMang(int *p, int n) {
    printf("mang truoc khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
} 

void bubble (int *p, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if(*(p + j) > *(p + j + 1)) {
                int tmp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = tmp;
            }
        }
    }
}

void in2Mang (int *p, int n) {
    printf("mang sau khi sap xep la : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
}

int main () {
    int n;
    scanf("%d", &n);

    int arr[n];

    nhapMang(arr, n);
    inMang(arr, n);

    bubble(arr, n);

    in2Mang(arr, n);
    return 0;
}