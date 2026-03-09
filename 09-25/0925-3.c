#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Input: "), scanf("%d", &n);

    if(n >= 100) {
        printf("large");
    }
    else {
        printf("small");
    }
}