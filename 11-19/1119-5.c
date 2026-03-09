#include <stdio.h>
#include <math.h>

struct point
{
	int x;
	int y;
};

int get_val()
{
	int val;
	printf("Input : "), scanf("%d", &val);
	return val;
}

void main()
{
	struct point p1,p2;
	int area, peri;

	p1.x = get_val(), 	p1.y = get_val();
	p2.x = get_val(), 	p2.y = get_val();

	area = (p2.x - p1.x) * (p2.y - p1.y);
	peri = 2 * (p2.x - p1.x) + 2 * (p2.y - p1.y);

	printf("Area = %d \n", area);
	printf("Peri = %d \n", peri);

}