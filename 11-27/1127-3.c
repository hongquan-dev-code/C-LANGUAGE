#include <stdio.h>
#include <string.h>

int main () {
    FILE *fp;
    fp = fopen("get_test_FILE.txt", "w");
    char str[80];

    if (fp != NULL) {
        printf("success\n");
    }
    else {
        printf("Fail\n");
    }
    
    do{
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        fputs(str, fp);
    } while(strlen(str) != 0);

    fclose(fp);
}