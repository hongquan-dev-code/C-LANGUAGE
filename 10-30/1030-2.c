#include <stdio.h>

int main() {
    char str[] = "Ok Start";       // 문자열 초기화 (khởi tạo chuỗi)
    int i;                         // 반복문 제어 변수 (biến lặp)

    printf("%s\n", str);           // 문자열 전체 출력 (in toàn bộ chuỗi)
    
    for (i = 0; i < sizeof(str); i++) {      // 문자열의 각 문자를 출력 (in từng ký tự)
        printf("str[%d] = %c\n", i, str[i]);
    }
    return 0;
}