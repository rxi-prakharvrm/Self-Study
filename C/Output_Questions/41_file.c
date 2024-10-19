#include <stdio.h>
#define cube(x) (x * x * x)

int main() {
    int x = 2;
    printf("%d", cube(++x));
    return 0;
}