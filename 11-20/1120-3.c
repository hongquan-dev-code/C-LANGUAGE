#include <stdio.h>

struct point
{
	int x;
	int y;
};

struct point get_vec_sum(struct point a, struct point b)
{
    struct point rst;

    rst.x = a.x + b.x;
    rst.y = a.y + b.y;
    return rst;         
}

void main()
{
    struct point a = {2, 3};
    struct point b = {5, 6};
    struct point c;

    c = get_vec_sum(a, b);
    printf("Sum = (%d %d) \n", c.x, c.y);
}