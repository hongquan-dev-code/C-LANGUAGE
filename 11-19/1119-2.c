#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int input() {
    int a;
    printf("Input: "), scanf("%d", &a);
    return a;
}
int main() {
    struct point p1, p2;
    double x_dist, y_dist;
    double dist;
    
    p1.x = input();
    p1.y = input();
    p2.x = input();
    p2.y = input();

    x_dist = p1.x - p2.x;
	y_dist = p1.y - p2.y;

    // tim khoang cac giua 2 toa do(sqrt: tinh can bac 2)
    dist = sqrt(x_dist * x_dist + y_dist * y_dist);
    
    printf("%d   %d\n", p1.x, p1.y);
    printf("%d   %d\n", p2.x, p2.y);

    printf("Dist = %.2lf\n", dist);

    return 0;
}