#include<stdio.h>

int main() {
    int dan, i = 1;
/*      printf("Input: "), scanf("%d", &dan);
    while(i <= 0);
    {
        printf("\t%d x %d = %d", dan, i, dan*i);
        i++;
    }
*/
      while( i <= 10){ 
        printf("\t%5d   %5d  \n", i, i*i);
        i++;
      }    
}