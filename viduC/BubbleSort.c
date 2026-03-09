#include <stdio.h>

int bub(int arr[], int n) {
    for(int j = 0; j < n - 1; j++) {
        for(int i = 0 ; i < n - j - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int k = 0; k < n; k++) {
        scanf("%d", &arr[k]);
    }
    bub(arr, n);
    for(int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    return 0;    
}