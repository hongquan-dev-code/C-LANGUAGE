#include<stdio.h>

int main() {
    int eng, math, kor;
    int tot, avg = 0;

    printf("Input: "), scanf("%d", &kor);
    printf("Input: "), scanf("%d", &math);
    printf("Input: "), scanf("%d", &eng);
    
    tot = kor + eng + math;
    avg = tot / 3;

    if(avg >= 90) printf("A \n");
    else if(avg >= 80) printf("B \n");
    else if(avg >= 70) printf("C \n");
    else if(avg >= 60) printf("D \n");
    else printf("F \n");
}