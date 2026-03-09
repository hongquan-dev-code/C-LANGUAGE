#include <stdio.h>

int main() {
    // int i, a;
    // int sum = 0;

    // for(i = 0; i < 50; i++) {
    //    sum += i;
    //    a = i;
    //    if(sum > 100) {
    //         break;
    //     }    
    // }
    // printf("sum = %d\n", sum - a);

    int i = 0, sum = 0, a;
    while(i < 50) {
        sum += i;
        if(sum > 100) break;
        i++;
        a = i;
    }
    
    printf("Sum = %d \n", sum - a);
}