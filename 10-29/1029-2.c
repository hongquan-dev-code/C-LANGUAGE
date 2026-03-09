#include <stdio.h>
#define SIZE 16                     // 총 강의 횟수 16회 (định nghĩa tổng số buổi học = 16)

int main(void) {
    int arr[SIZE];       // 출석 상태 저장 배열, 0으로 초기화 (mảng lưu trạng thái điểm danh, mặc định 0)
    int i, count = 0;               // i: biến lặp, count: đếm số buổi vắng

    // 사용자로부터 출석 정보 입력받기 (nhập thông tin điểm danh)
    for (i = 0; i < SIZE; i++) {
        printf("%d 번째 강의에 출석하셨나요 (출석은 1, 결석은 0): ", i + 1);
        scanf("%d", &arr[i]);  // 1 또는 0 입력받아 배열에 저장 (nhập 1 hoặc 0)
    }

    // 결석한 횟수를 계산 (đếm số buổi vắng)
    for (i = 0; i < SIZE; i++) {
        if (arr[i] == 0)
            count++;
    }

    // 결석률 계산 (tính tỷ lệ vắng)
    double ratio = count / 16.0;    

    if (ratio > 0.3)  // 결석률이 30% 초과시 경고 (nếu vắng >30%)
        printf("수업 일수 부족입니다 (%.2f%%).\n", ratio * 100.0);

    return 0;
}
