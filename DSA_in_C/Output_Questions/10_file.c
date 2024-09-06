#include <stdio.h>

int main() {
    int x = 2, y = 3;
    x = x++ * ++y;
    printf("%d %d", x, y);
    return 0;
}