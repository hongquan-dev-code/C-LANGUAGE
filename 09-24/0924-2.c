#include<stdio.h>
#include<math.h>

#define rate 0.06 // lai suat 6%

int main() {
    int year , ori_won;
    double rst;

    printf("Input Year: "); // so nam
    scanf("%d", &year);

    printf("Input won: "); // so tien goc (won)
    scanf("%d", &ori_won);

    // tinh tien lai kep: cong thuc = goc * (1 + rate)^year
    rst = ori_won * pow((1.0 + rate), year); // pow(x, y): tinh x^y

    printf("Rst = %f \n", rst);
}