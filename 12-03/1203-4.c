#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    int num, sco;
    char name[20];

    fp = fopen("student.txt", "w");

    for (int i = 0; i < 3; i++) {
        printf("번호 입력: ");
        scanf("%d", &num);
        printf("이름, 성적 입력: ");
        scanf("%s  %d", name, &sco);

        fprintf(fp, "%d  %s  %d\n", num , name, sco);
    }
    fclose(fp);
}