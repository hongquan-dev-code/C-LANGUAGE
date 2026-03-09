#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    int num, sco;
    int cnt = 0, tot = 0;
    char name[20];

    fp = fopen("student.txt", "r");

    while (!feof(fp)) {
        fscanf(fp, "%d %s %d", &num, name, &sco);
        printf("%d %s %d\n", num, name, sco);
        cnt++;
        tot = tot + sco;
    }
    printf("Sum = %d  Avg = %d\n", tot, tot / cnt);
    fclose(fp);
}