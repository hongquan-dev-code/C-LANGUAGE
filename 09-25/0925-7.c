#include<stdio.h>

int main() {
    int in_size;

    printf("Input: "), scanf("%d",&in_size);

    if(in_size < 100) {
        printf("Small \n");
    }
    else if(in_size > 100 && in_size < 200) {
        printf("Medium\n");
    }
    else {
        printf("large\n");
    }
}