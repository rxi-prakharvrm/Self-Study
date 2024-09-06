#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;
    int *p = &x, *q = &y;
    *p = *q;
    printf("%d", x);
    return 0;
}