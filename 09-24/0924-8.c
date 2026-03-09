#include<stdio.h>
#include<math.h>

int main() {
    int year;

    printf("Input: "), scanf("%d", &year);

    /* dieu kien nam nhuan :
      - nam chia het cho 4 va khong chia het cho 100
      - hoac nam chia het cho 400
      -> nam nhuan */
    if(((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0) {
        printf("윤년\n"); // nam nhuan 
    }
    else {
        printf("평년\n"); // nam thuong
    }
    return 0;
}