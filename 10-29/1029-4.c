#include<stdio.h>
#define size 5

int main() {
    int arr[size];
    int max = 0;

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++){
       if(arr[i] > max) max = arr[i];
    }   
    printf("max = %d", max);
    return 0;
}