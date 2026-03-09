#include<stdio.h>

int main() {
    // cash: so tien nhap vao , satang: so luong don vi 300, rest: so du
    int cash, satang, rest;
    printf("Input: ");
    scanf("%d", &cash);

    // tinh so luong don vi 300
    satang = cash / 300;

    // tinh so du sau khi chia 300
    rest = cash % 300;

    printf(" tien = %d  so don vi 300 = %d  so du = %d\n", cash, satang, rest);
}