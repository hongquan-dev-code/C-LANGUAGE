#include <stdio.h>

int main () {
    if (remove("test_FILE.txt") == 0) {
        printf("success\n");
    }
    else {
        printf("File not found\n");
    }
}