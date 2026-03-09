#include <stdio.h>

struct student {
    int age;
    char name[20];
    double grade;
};

struct student make_student(void)
{
    struct student s;

    printf("나이:");        
    scanf("%d", &s.age);

    printf("이름:");    
    scanf("%s", s.name);

    printf("키:");         
    scanf("%lf", &s.grade);

    return s;
}

int main() {
    struct student st;
    st = make_student();
    
    printf("학생 나이: %d\n", st.age);
    printf("학생 이름: %s\n", st.name);
    printf("학생 키: %.2lf\n", st.grade);

    return 0;
}
