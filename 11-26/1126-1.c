#include <stdio.h>

typedef struct student {
    int num;
    char name[100];
    double grade;
}student;

int main() {
    student s1 = {100, "홍길동", 4.3};
    student *p;
    student s2[3];

    p = &s1;

    printf("%d  %s  %.2lf\n", s1.num, s1.name, s1.grade);
    printf("%d  %s  %.2lf\n", (*p).num, (*p).name, (*p).grade);
    printf("%d  %s  %.2lf\n", p->num, p->name, p->grade);

    printf("Input: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &s2[i].num);
        scanf("%s", s2[i].name);
        scanf("%lf", &s2[i].grade);
    }
    for (int i = 0; i < 3; i++) {
        printf("%d  %s  %.2lf\n", s2[i].num, s2[i].name, s2[i].grade);
    }
    return 0;
}