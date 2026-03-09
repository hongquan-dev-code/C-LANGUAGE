#include <stdio.h>

int sum_s(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int max(int arr[], int n) {
    
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sum_s(arr, n);

    printf("sum = %d", sum);

    printf("max = %d", max(arr, n));


}