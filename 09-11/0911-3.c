// doi dol sang won
#include <stdio.h>     

#define Exchange 1140  // ti gia 1 USD = 1140 KRW

int main()
{
    int dol, won;  // khai bao bien dol (so USD) va won (so KRW)
    
    // nhap so tien USD
    printf("Input Dol : ");     
    scanf("%d", &dol);
    
    // cong thuc quy doi sang KRW
    won = Exchange * dol;
    
    // in ket qua quy doi
    printf("Dol = %d  =>  Cal Won = %d\n", dol, won); // cal la viet ta cua Calculate: ket qua tinh ra
}
