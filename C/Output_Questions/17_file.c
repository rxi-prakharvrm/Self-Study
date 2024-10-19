#include <stdio.h>

int main() {
    int x = 1, y = 1;
    if (--x || y++)
        printf("%d %d", x, y);
    return 0;
}