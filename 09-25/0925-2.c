#include<stdio.h>
#include<stdlib.h>

int main() {
    int rst, in_val;

    printf("Input: "), scanf("%d", &in_val);

    
    if(in_val % 2 == 0) {
        printf("Front\n");
    }
    else {
        printf("Back\n");
    }
}