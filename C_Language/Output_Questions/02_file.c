#include <stdio.h>
#define square(x) x * x
// #define square(x) (x) * (x)

int main() {
    int y = 3;
    printf("%d", square(y+1));
    return 0;
}
