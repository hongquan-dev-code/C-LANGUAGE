// vi du ve tran so (overflow) va tran nguoc (underflow)
#include <stdio.h>   

int main()
{
    short mny = 32767;     // khai bao bien mny kieu short, gan gia tri max cua short la 32767
    short s_mny = -32768;  // khai bao bien s_mny kieu short, gan gia tri min cua short la -32768
    
    // in ra gia tri ban dau truoc khi cong tru
    printf("Before mny = %d \n", mny);
    printf("Before s_mny = %d \n", s_mny);
    
    // thuc hien cong 1 vao gia tri lon nhat (se bi tran so)
    mny = mny + 1;  
    
    // thuc hien tru 1 vao gia tri nho nhat (se bi tran nguoc)
    s_mny = s_mny - 1;  
    
    // in ra ket qua sau khi bi tran
    printf("Overflow After mny = %d \n", mny);
    printf("Underflow After s_mny = %d \n", s_mny);
}
