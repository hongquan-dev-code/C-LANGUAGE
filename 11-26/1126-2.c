#include <stdio.h>

union example {
    int i;
    char c;
};

int main(void) {
    union example data; // khai bao bien data

    data.c = 'A'; // gan ki tu
    printf("data.c : %c    data.i : %d\n", data.c, data.i);

    data.i = 10000; // gan so nguyen
    printf("data.c : %c    data.i : %d\n", data.c, data.i); 
    
    return 0;
}
