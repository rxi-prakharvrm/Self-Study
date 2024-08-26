#include <stdio.h>

int main() {
    int x = 30, *y, *z;
    y = &x;
    z = y;
    *y = *z;
    x++;
    printf("%d, %d, %d", x, y, z);
    return 0;
}