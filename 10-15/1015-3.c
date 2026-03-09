#include <stdio.h>

int input() {
    int in_val;
    printf("Input: ");
    scanf("%d", &in_val);
    return in_val;
}

int main() {
    int j = 1; 
    int fact = 1;
    int in_val;
    // printf("Input: ");
    // scanf("%d", &in_val);
    in_val = input();
    while(j <= in_val) {
        fact *= j;
        j++;
    }
    printf("Fact = %d", fact);
}