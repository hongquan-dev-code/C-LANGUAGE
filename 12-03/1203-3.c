#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    FILE *fp;
	int i = 23;
    double f = 1.2345;
    srand(time(NULL));
    fp = fopen("abc.txt", "w");

    for (int k = 0; k < 5; k++) {
        fprintf(fp, "%10d  %16.3lf\n", i, f);
        i = i + rand() / 300;
        f = f + rand() / 100; 
    }
    fclose(fp);

    fp = fopen("abc.txt", "r");
    for (int k = 0; k < 5; k++) {
        fscanf(fp, "%d  %lf", &i, &f);
        printf("%10d  %16.3lf\n", i, f);
    }
    fclose(fp);

    return 0;
} 
