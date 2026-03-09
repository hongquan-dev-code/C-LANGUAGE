#include <stdio.h>

struct point {
    int x; 
    int y;
};

int main() {
    struct point p = {1, 2};
    struct point q = {.y = 100, .x = 30};
    struct point r = q;

    printf("%d   %d\n", p.x, p.y);
    printf("%d   %d\n", q.x, q.y);
    printf("%d   %d\n", r.x, r.y);

    return 0;
}