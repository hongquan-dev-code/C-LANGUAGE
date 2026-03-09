#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int soBiMat, doan, soLan = 0;

    srand(time(NULL));
    soBiMat = rand() % 100 + 1;

    while(1) {
        printf("Nhap so ban doan: ");
        scanf("%d", &doan);
        soLan++;

        if(doan > soBiMat) {
            printf("ban da doan lon hon roi\n");
        }
        if(doan < soBiMat) {
            printf("ban da doan nho hon roi\n");
        }
        if(doan == soBiMat) {
            printf("ban da doan dung\n");
            printf("ban da doan dung sau %d lan\n", soLan);
            break;
        }
    }
}