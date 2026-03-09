#include<stdio.h>
#define NUM 5

int main() {
    int a[5] = {31,63,62,87,14};
    int max = 0;
    
    for (int i = 0; i < NUM; i++) {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < NUM; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    printf("\nMax = %d\n", max);
}