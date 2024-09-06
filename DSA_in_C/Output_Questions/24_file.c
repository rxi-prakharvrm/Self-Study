#include <stdio.h>

int main() {
    int x = 4;
    printf("%d", sizeof(x++));
    printf("%d", x);
    return 0;
}