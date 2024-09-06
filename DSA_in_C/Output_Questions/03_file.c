#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *p = &a, *q = &b;
    *p ^= *q;
    *q ^= *p;
    *p ^= *q;
    printf("%d %d\n", *p, *q);
    return 0;
}