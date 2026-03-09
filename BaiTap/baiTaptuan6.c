#include <stdio.h>

int main() {
    int a, b, r;

    while(1) {   
        printf("Input a, b: ");
        scanf("%d %d", &a, &b);

        while(b != 0) {
            r = a % b;
            a = b;
            b = r;
        }
        printf("최대공약수: %d\n", a);
    }
    return 0;
}
