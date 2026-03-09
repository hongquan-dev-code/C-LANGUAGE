#include <stdio.h>

int val = 10000;

int int_ins()
{
    int inval;
    printf("Input : "), scanf("%d", &inval);
    return inval;
}
void prt()
{
	int val;
	val = 100;
	printf("%d \n", val);
}
int get_sum(int n)
{
	int i, result = 0;
	
	for(i=0; i <= n; i++)
		result += i;
	return result;
}
void main()
{
    int in_val;

    in_val = int_ins();
//    printf("%d \n", in_val);
    prt();  // print -> 100

    val = get_sum(in_val);
    
   printf("%d \n", val);  // print -> 10000
    
}