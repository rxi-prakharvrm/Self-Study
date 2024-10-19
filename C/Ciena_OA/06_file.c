#include <stdio.h>
#define square(x) x * x

int main() {
    int y = 36 / square(6);
    printf("%d", y);
    return 0;
}