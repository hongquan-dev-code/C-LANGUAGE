#include<stdio.h>
#define NUM 26

int main() {
    char ch[NUM];

    printf("%d\n", 'a');

    for (int i = 0; i <= NUM; i++) {
        ch[i] = 'a' + i;
        printf("%c => %d \n", ch[i], ch[i]);
    }
}