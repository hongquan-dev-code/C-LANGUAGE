#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    int buf[] = {10, 20, 30, 40, 50};
    int size, cnt = 0;

    fp = fopen("bine.bin", "wb");

    size = sizeof(buf[0]);
    cnt = sizeof(buf) / sizeof(buf[0]);

    fwrite(&buf, size, cnt, fp);

    fclose(fp);
}