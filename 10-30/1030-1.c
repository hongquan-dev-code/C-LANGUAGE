#include <stdio.h>

int main(void) {
    char arr[3][3];                 // 3x3 문자형 배열 선언 (mảng 3x3 lưu ký tự 'X', 'O', hoặc khoảng trắng)
    int x, y, k, i;                   // x, y: tọa độ; k: số lượt; i: biến lặp in bảng

    // 보드를 초기화한다. (khởi tạo bảng trống)
    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++)
            arr[x][y] = ' ';        // 모든 칸을 공백으로 설정 (đặt ký tự rỗng)

    // 사용자로부터 위치를 받아서 보드에 표시한다. (nhập tọa độ và đánh dấu)
    for (k = 0; k < 9; k++) {         // 최대 9번 입력 (tối đa 9 lượt – vì bảng 3x3 có 9 ô)
        printf("(x, y) 좌표 : ");     // 위치 입력 요청 (yêu cầu nhập tọa độ)
        scanf("%d %d", &x, &y);       // 입력받은 좌표 저장 (nhập tọa độ từ bàn phím)

        arr[x][y] = (k % 2 == 0) ? 'X' : 'O';  // 짝수 턴이면 X, 홀수 턴이면 O (nếu lượt chẵn thì X, lẻ thì O)

        // 보드를 화면에 그린다. (vẽ bảng ra màn hình)
        for (i = 0; i < 3; i++) {
            printf("---|---|---\n");   // 구분선 (đường phân cách)
            printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
        }
        printf("---|---|---\n");
    }

    return 0;
}
