#include <stdio.h>

int main() {
    int i = 100;
    int *p;
    p = &i;

    // i = *p;
    // p = &i;

    i = i + 500;

    *p = 1000;

    printf("i의 주소:%d    %d     %d\n",i, &i, sizeof(i));
    printf("p의 주소:%d    %d     %d\n",*p, p, sizeof(*p));

    return 0;
}