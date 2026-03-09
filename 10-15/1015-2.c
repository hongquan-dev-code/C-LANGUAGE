#include <stdio.h>

int ham() {
    printf("***************\n");
}
int ham2(int a) {
    for (int i = 0; i < a; i++) {
        printf("*             *\n");
    }
}
int main() {
    ham();
    ham2(5);
    ham();
}