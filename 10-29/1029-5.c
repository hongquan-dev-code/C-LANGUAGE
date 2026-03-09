#include <stdio.h>
#define SIZE 10                        // 배열 크기 10 (mảng gồm 10 phần tử)

int main(void) {
    int key;                        // key: 찾을 값 (số cần tìm), i: chỉ số lặp
    int list[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // 배열 초기화

    printf("[ ");
    for (int i = 0; i < SIZE; i++)         // 배열 출력 (in danh sách)
        printf("%d ", list[i]);
    printf("]\n");

    printf("탐색할 값을 입력하시오: ");  // 사용자로부터 값 입력받기 (nhập số cần tìm)
    scanf("%d", &key);

    for (int i = 0; i < SIZE; i++) {
        if (list[i] == key) {          // 찾는 값이 있으면 (nếu phần tử trùng với key)
            printf("탐색 성공! 인덱스 = %d\n", i + 1);  // 위치 출력 (in vị trí)
            break;                     // 찾으면 반복 종료 (dừng khi tìm thấy)
        }
    }

    return 0;
}
