#include <stdio.h>
#define INC(x) x + 1

int main() {
    int x = 3;
    printf("%d", INC(x) * 2);
    return 0;
}