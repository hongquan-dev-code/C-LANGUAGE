#include<stdio.h>

// In ra ước số chung lớn nhất
int main(){
    int x, y, r;

    while(1){
    printf("Input: ");
    scanf("%d %d", &x,&y);

    while(y != 0){
        r = x % y;
        x = y;
        y = r;
    } printf("최대 공약수는 %d \n", x);
      }
}
    