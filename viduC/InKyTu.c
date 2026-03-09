#include<stdio.h>
#define SIZE 26
int main() {
    char kiTu[SIZE];

    for (int i = 0; i < SIZE; i++) {
        kiTu[i] = 'a' + i;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("KiTU[%c] = %d\n", kiTu[i], kiTu[i]);
    }
    printf("\n");
    return 0;
}