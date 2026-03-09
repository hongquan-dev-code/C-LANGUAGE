// so sanh toan tu tang truoc(++!) va toan tu tang sau (!=++)
#include<stdio.h>

int main() {
    int in_val1 = 10, in_val2 = 10;
    int x, y;
    
    // ++in la toan tu tang truoc
    x = ++in_val1;
    printf("Rst1 = %d \n",x);

    // in++ la toan tu tang sau
    y = in_val2++;
    // gan gia tri cho in_val2 truoc , sau do moi tang len 1 don vi
    printf("Rst2 = %d \n", y);
    printf("in_val2 = %d \n",in_val2);
}