#include <stdio.h>

void mod(int *i) {
    *i = 100;
}

int mods(int i) {
    i = 100;
    return i;
}
int main() {
    int num = 1;
    int rts;

    mod(&num);
    rts = mods(num);    
    
    printf("NUM = %d RTS = %d\n", num, rts);
    return 0;
}