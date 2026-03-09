#include <stdio.h>

int main() {
    // v = *p++, v = (*p)++, v = *++p, v = ++*p
// v = *p++	Gán giá trị mà p trỏ tới vào v, sau đó tăng con trỏ p.
// v = (*p)++	Gán giá trị mà p trỏ tới vào v, sau đó tăng giá trị tại vị trí mà p trỏ tới.
// v = *++p	Tăng con trỏ p trước, rồi gán giá trị mà p (đã tăng) trỏ tới vào v.
// v = ++*p	Tăng giá trị tại vị trí mà p trỏ tới, rồi gán giá trị đó vào v.

    int i = 10, j = 30;
    int *p1, *p2;
    int v1, v2, v3, v4;
    
    p1 = &i;
    p2 = &j;

    printf("before: ");
    printf("i = %d p = %d   %d\n", i, *p1, p1);

    v1 = *p1++;
    printf("V1 = %d p = %d   %d\n", v1, *p1, p1);

    v2 = (*p1)++;
    printf("V2 = %d p = %d   %d\n", v2, *p1, p1);

    v3 = ++*p2;
    printf("V3 = %d p = %d   %d\n", v3, *p2, p2);

    v4 = ++(*p2);
    printf("V4 = %d p = %d   %d\n", v4, *p2, p2);
    return 0;
}