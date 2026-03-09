#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    int buf[10];
    int size, cnt = 0;

    fp = fopen("bine.bin", "rb");
                
    size = fread(&buf, sizeof(int), 10, fp);
    
    for(int i = 0; i < size; i++){
        printf("%d ", buf[i]);
    }

    fclose(fp);
}