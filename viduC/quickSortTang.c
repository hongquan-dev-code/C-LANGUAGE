#include<stdio.h>

// ham phan hoach lo_mu_to : tra ve chi so cua khoa (pivot)
int partition(int a[], int l, int r) {
    int i = l - 1;
    int pivot = a[r];
    for (int j = l; j < r; j++) {
        // neu a[j] > pivot : bo qua
        if (a[j] <= pivot) {
            // dua a[j] len dau
            i++;
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    i++;
    int tmp = a[i];
    a[i] = a[r];
    a[r] = tmp;
    return i;
}

void quickSort(int a[], int l, int r) {
    if(l < r) {
        int pos = partition(a, l, r);
        // xet de quy ve day ben trai
        quickSort(a, l, pos - 1);
        quickSort(a, pos + 1, r);
    }
}
int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}