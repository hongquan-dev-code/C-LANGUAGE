#include <stdio.h>
#include <string.h>

struct point
{
	int x;
	int y;
};

struct student
{
    int num;
    char name[10];
    float grade;
};

int i_eql(struct point p1, struct point p2)
{        
    if(p1.x == p2.x)
        return 0;
    else
        return 1;
}

int s_eql(struct student st1, struct student st2)
{
     if(strcmp(st1.name,st2.name) == 0)
        return 0;
    else
        return 1;
}

void main()
{
    struct point p1, p2;
    struct student st1, st2;
    int i_rst, s_rst;

    p1.x = 10, p1.y = 20;
    p2.x = 10, p2.y = 30;

    i_rst = i_eql(p1, p2);
    printf("I_Rst = %d \n", i_rst);
    
    printf("Input : "), scanf("%d", &st1.num);
    printf("Input : "), scanf("%s", st1.name);
    printf("Input : "), scanf("%f", &st1.grade);

    printf("Input : "), scanf("%d", &st2.num);
    printf("Input : "), scanf("%s", st2.name);
    printf("Input : "), scanf("%f", &st2.grade);

    s_rst = s_eql(st1, st2);
    printf("S_Rst = %d \n", s_rst);

}