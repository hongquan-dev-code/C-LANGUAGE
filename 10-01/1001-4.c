#include<stdio.h>

int main() {
    int i = 5, fact = 1;

    /*while(i >= 1) {
        fact *= i;
        i--;
    } */
   
   for(i = 5; i >= 1; i--)
   {
    fact *= i;
   }
    printf("Fact = %d \n", fact);
}