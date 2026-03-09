// tinh thoi gian tu trai dat toi mat troi
#include <stdio.h>         

#define s_dist  300000      // van toc anh sang: 300,000 km/s
#define dist    149600000   // khoang cach tu Trai Dat den Mat Troi: 149,600,000 km

int main()
{
    // khai bao bien cho (so giay), bun (so phut)
    int cho = 0, bun = 0;

    // tinh tong thoi gian (giay) = khoang cach / van toc
    cho = dist / s_dist;

    // doi tu giay sang phut
    bun = cho / 60;      // so phut
    cho = cho % 60;      // so giay con lai sau khi doi ra phut

    // in ket qua
    printf("Bun = %d Second = %d \n", bun, cho);
}
