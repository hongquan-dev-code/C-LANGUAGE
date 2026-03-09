#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[7];
    srand(time(NULL));

    for (int i = 0; i < 7; i++) {
        arr[i] = rand() % 100 + 1;

        // chu y: j < i
        for (int j = 0; j < i; j++) { 
            if(arr[i] == arr[j]) {
                i--;
                break;
            }
        }
    }

    for(int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}