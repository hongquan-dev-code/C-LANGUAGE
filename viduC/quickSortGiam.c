#include<stdio.h>

int partition(int arr[], int l, int r) {
    int i = l - 1;
    int pivot = arr[r];
    for (int j = l; j < r; j++) {
        if(arr[j] > pivot) {
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    i++;
    int tmp = arr[i];
    arr[i] = arr[r];
    arr[r] = tmp;
    return i;
}

void quickSort(int arr[], int l, int r) {
    if (l < r) {
        int pos = partition(arr, l, r);
        quickSort(arr, l, pos - 1);
        quickSort(arr, pos + 1, r);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 
    quickSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}