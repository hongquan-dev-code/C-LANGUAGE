#include <stdio.h>    

#define month  12      // so thang trong 1 nam
#define mny    5000000 // so tien 1 thang (vi du: 5,000,000 VND)

int main()
{
    int year, total = 0;  // year: so nam, total: tong so tien
    
    // nhap vao so nam
    printf("Input Year : ");     
    scanf("%d", &year);
    
    // cong thuc tinh tong tien: nam * thang * so tien moi thang
    total = year * month * mny;
    
    // in ra ket qua
    printf("Cal Mny = %d \n", total); // cal : ket qua tinh ra
}
