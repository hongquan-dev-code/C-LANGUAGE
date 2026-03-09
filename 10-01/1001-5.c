#include<stdio.h>

int main() {
    int i, fact = 1;

    printf("Input: "), scanf("%d", &i);

    while(i >= 1){
        fact += i;
        i--;
    } printf("Fact = %d \n", fact);
}
