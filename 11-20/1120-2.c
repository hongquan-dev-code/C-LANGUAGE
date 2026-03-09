#include <stdio.h>

struct student {
    int num;
    char name[20];
    double grade;
};

int main() {
    struct student st[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &st[i].num);
        scanf("%s", &st[i].name);
        scanf("%lf", &st[i].grade);
    }

    for (int i = 0; i < 3; i++) {
        printf("%d %s %.2lf\n", st[i].num, st[i].name, st[i].grade);
    }
    return 0;
}