#include <stdio.h>

enum days { MON, TUE, WED, THU, FRI, SAT, SUN };

// Tạo một mảng con trỏ và khởi tạo chúng bằng hằng số chuỗi.
char *days_name[] = {
    "monday", "tuesday", "wednesday",
    "thursday", "friday", "saturday", "sunday"
};
char *days_name[7][10] = {
    "monday", "tuesday", "wednesday",
    "thursday", "friday", "saturday", "sunday"
};
 
int main() {
    enum days d;
    int i;

    printf("----------포인터로 출력----------");
    for (d = MON; d <= SUN; d++)
        printf("%d 번째 요일의 이름은 %s 입니다\n", d, days_name[d]);

    printf("----------배열1로 출력----------");
    for (i = 0; i <= 7; i++)
        printf("%d 번째 요일의 이름은 %s 입니다\n", d, days_name[d]);
        
    return 0;
}
