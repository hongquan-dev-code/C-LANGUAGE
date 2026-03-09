// Thuật toán bubble sort
#include <stdio.h>
#define SIZE 5

int main(void) {
    int i, k;
    int list[SIZE] = {16, 7, 9, 1, 3};  // 정렬할 배열 (mảng cần sắp xếp)

    // 배열의 요소를 정렬한다. (thực hiện sắp xếp các phần tử)
    for (k = 0; k < SIZE; k++) {          // 바깥쪽 반복문: 전체 패스 반복 (vòng lặp ngoài – số lần duyệt)
        for (i = 0; i < SIZE - 1; i++) {  // 안쪽 반복문: 인접한 요소 비교 (vòng lặp trong – so sánh các phần tử liền kề)
            if (list[i] > list[i + 1]) {   // 크기 순이 아니면 교환 (nếu phần tử trước lớn hơn phần tử sau)
                int tmp = list[i];         // tmp에 list[i] 저장 (lưu tạm giá trị phần tử trước)
                list[i] = list[i + 1];     // list[i]에 list[i+1] 대입 (đổi chỗ)
                list[i + 1] = tmp;         // list[i+1]에 tmp 대입 (đổi chỗ)
            }
        }
    }

    // 배열의 요소를 출력한다. (in các phần tử sau khi sắp xếp)
    for (i = 0; i < SIZE; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}
