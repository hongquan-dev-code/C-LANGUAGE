#include <stdio.h>

int inputArr(int *p) {
    printf("Input : ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }
} 

int printArr(int *p) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int sumAvg(int *p, int *sum, double *avg) {
    *sum = 0;
    for (int i = 0; i < 5; i++) {
        *sum += *(p + i);
    }
    *avg = (double)*sum / 5;
}

int main() {
    int arr[5];
    int sum;
    double avg;

    inputArr(arr);
    printArr(arr);
    sumAvg(arr, &sum, &avg);

    printf("SUM = %d AVG = %.2lf\n", sum, avg);

    return 0;
}