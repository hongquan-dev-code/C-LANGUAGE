#include <stdio.h>

int main() {
    int i = 10; 
    char c = 69; 
    float f = 12.3;
    printf("i의 주소: %d     %d\n", &i, sizeof(i));
    printf("c의 주소: %d     %d\n", &c, sizeof(c));
    printf("f의 주소: %d     %d\n", &f, sizeof(f));
    return 0;
}