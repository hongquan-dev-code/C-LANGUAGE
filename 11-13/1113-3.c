#include <stdio.h>

void prt_arr(int val[], int n)
{
	for(int i=0; i < n; i++)
	{
		printf("%d ", val[i]);
	}
}

double get_avg(int val[], int n)
{
	int sum = 0;
	double avg = 0;
	for(int i=0; i < n; i++)
	{
		sum += val[i];
	}
	avg = sum / 5.0;
	return avg;
}
void main()
{
	int data[] = {10,20,30,40,50};
	int i;
	double avg;
	
	prt_arr(data, 5);
	avg = get_avg(data,5);
	printf("Avg = %.1f", avg);
	
}