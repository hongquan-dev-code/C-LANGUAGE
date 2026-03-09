#include <stdio.h>

typedef struct point {
    int x;
    int y;
}point;

typedef int INS;

int main() {
    point p1;

    INS i;
    p1.x = 10;
    p1.y = 20;

    printf("%d    %d\n", p1.x, p1.y);

    return 0;
}