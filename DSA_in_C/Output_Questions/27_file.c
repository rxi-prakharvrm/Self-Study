#include <stdio.h>

int main() {
    int x = 10;
    int y = x++ + x++ + ++x;
    printf("%d %d", x, y);
    return 0;
}