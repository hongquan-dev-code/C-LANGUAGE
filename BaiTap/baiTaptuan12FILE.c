#include <stdio.h>

int main() {
    FILE *fp;
    int num, sco;
    int cnt = 0, tot = 0;
    char name[20];

    // --- PHẦN 1: GHI FILE ---
    fp = fopen("student.txt", "w");
    for (int i = 0; i < 3; i++) {
        printf("번호 입력: ");
        scanf("%d", &num);
        printf("이름, 성적 입력: ");
        scanf("%s %d", name, &sco);
        fprintf(fp, "%d %s %d\n", num, name, sco);
    }
    fclose(fp);

    // --- PHẦN 2: ĐỌC FILE ---
    fp = fopen("student.txt", "r");
    while (!feof(fp)) {
        fscanf(fp, "%d %s %d", &num, name, &sco);
        printf("%d %s %d\n", num, name, sco);
        cnt++;
        tot += sco;
    }
    printf("Sum = %d  Avg = %d\n", tot, tot / cnt);
    fclose(fp);

    return 0;
}
