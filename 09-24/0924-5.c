#include<stdio.h>
#include<math.h>

int main() {
    int math , eng, kor;
    int avg, tot = 0; // avg: diem trung binh, tot: diem tong

    printf("Input: "), scanf("%d", &kor);
    printf("Input: "), scanf("%d", &eng);
    printf("Input: "), scanf("%d", &math);

    tot = kor + eng + math;
    avg = tot / 3;

    if(avg > 90) {
        printf("합격, 장학금 ok \n");
    }
    else{
        printf("불합격\n");
    }
}