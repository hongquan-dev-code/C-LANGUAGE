#include <stdio.h>
#define ROWS 3   // 행의 개수 (số hàng)
#define COLS 3   // 열의 개수 (số cột)

int main(void) {
    int r, c;    // 반복문 제어 변수 (biến điều khiển hàng và cột)
    
    int A[ROWS][COLS] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };  // 행렬 A
    int B[ROWS][COLS] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };  // 행렬 B
    int C[ROWS][COLS];  // 결과 저장 행렬 C (ma trận kết quả)

    // 두 행렬을 더한다. (cộng từng phần tử của hai ma trận)
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            C[r][c] = A[r][c] + B[r][c];    // 같은 위치의 요소끼리 더함 (cộng phần tử cùng vị trí)
            printf("%d ", C[r][c]);          // 결과 출력 (in kết quả)
        }
        printf("\n");
    }

    return 0;
}
