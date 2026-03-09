// doi tu do F -> C
#include <stdio.h>  

void main()
{
    int fa;          // nhiet do Fahrenheit (so nguyen)
    float seb = 0;   // nhiet do Celsius (so thuc)
    
    // nhap nhiet do Fahrenheit
    printf("Input : ");     
    scanf("%d", &fa);

    // cong thuc doi tu Fahrenheit sang Celsius
    // C = (F - 32) * 5/9
    seb = (fa - 32) * 5.0 / 9.0;  // 5.0/9.0 de dam bao ket qua la so thuc

    // in ket qua
    printf("fa = %d  Seb = %f \n", fa, seb);
}
