#include<stdio.h>
#define size 5

int main() {
    int arr[size];
    int min = 1000;

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++){
       if(arr[i] < min) min = arr[i];
    }   
    printf("Min = %d", min);
    return 0;
}