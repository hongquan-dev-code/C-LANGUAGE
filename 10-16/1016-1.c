#include<stdio.h>
#define SIZE 4
#define NUM 3

int main() {
    int a, sum = 0, avg = 0;
    int x[3];
    int y[] = {0, 0, 0};

    for(int i = 0; i < 3; i++) {
        printf("Input: ");
        scanf("%d", &x[i]);
        sum += x[i];
    }
    avg = sum / 3;
    printf("sum = %d avg = %d\n", sum, avg);

    y [0] = 10;
    y [1] = 20;
    y [2] = 30;

     for(int i = 0; i < NUM; i++) {
        printf("%d   ", y[i]);
     }
}