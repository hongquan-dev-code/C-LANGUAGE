#include<stdio.h>
#define so 10

int main() {
    int mang[so];

    printf("Input: ");
    for(int i = 0; i < so; i++) {
        scanf("%d", &mang[i]);
    }
    int min = mang[0];

    for(int i = 0; i < so; i++) {
        if(mang[i] < min) {
            min = mang[i];
        }
    }
    printf("\nmin = %d\n", min);
}