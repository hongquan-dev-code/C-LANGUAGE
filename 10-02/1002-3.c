#include<stdio.h>

int main() {
    int n = 0;
    while(n > 0) {
        printf("%d \n", n);
        n = n - 3;
    }
    printf("--------------\n");
    do {
        printf("%d \n", n);
        n = n -3;
    }while(n > 0);
    printf("==============");
}