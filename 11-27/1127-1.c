#include <stdio.h>

int main () {
    FILE *fp;
    fp = fopen("test_FILE.txt", "w");

    if(fp = NULL) {
        printf("open fail \n");
    }
    else {
        printf("open success \n");
    }

    fputc('a', fp);

    fclose(fp);
}