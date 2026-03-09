#include <stdio.h>

int main() {
    int k, tmp;
    int arr[2][3] = {
        {16, 7, 9},
        {1, 3, 5}
    };
    for (int i = 0; i < 2; i++) {
        for (k = 0; k < 3; k++) {
            printf("%3d ", arr[i][k]);
        }
        printf("\n");
    }
}