#include <stdio.h>

int main() {
    char str[10];

    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);

    for(int i = 0; i < sizeof(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        printf("%c", str[i]);
    }
}