#include <stdio.h>

int main()  {
    int sum = 0;
    int fact = 1;
    for (int i = 0; i <= 10; i++) {
            sum += i;
        }
    for(int j = 1; j <= 6; j++) {
            fact *= j;
        }
    printf("Sum = %d\n", sum);
    printf("fact = %d\n", fact);

    for(int k = 0; k < 10; k++) {
        printf("Hello world!\n");
    }
}