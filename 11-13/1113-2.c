#include <stdio.h>

int cnt;

void sub()
{
	int cnt = 0; // auto_count
	static int st_cnt = 0;
	
	cnt++;
	st_cnt++;
	
	printf("Cnt = %d \n", cnt);
	printf("Static Cnt = %d \n", st_cnt);
	
}

int int_ins()
{
    int inval;
    printf("Input : "), scanf("%d", &inval);
    return inval;
}
int factorial(int n) //Not Using Recursive
{
	int fact = 1, i;
	
	for(i=1; i <= n; i++)
		fact *= i;
	return fact;
}

int re_fact(int n)  //Using Recursive 
{    
   // int cnt= 0;
    cnt++;
    printf("Fact(%d) \n", cnt );
	if(n <= 1) 
		return 1;
	else
		return n * re_fact(n-1);
}
void main()
{
	//sub();	sub();	sub();
	
	int fact, in_val, r_fact;
	
	in_val = int_ins();
	fact = factorial(in_val);
	r_fact = re_fact(in_val);
	printf("Fact = %d Re_Fact = %d \n", fact, r_fact);
}