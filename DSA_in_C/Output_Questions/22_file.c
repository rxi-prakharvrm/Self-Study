#include <stdio.h>

int main() {
    int i = 3;
    // printf("%d", (i++ * ++i * ++i * ++i));
    // printf("%d", (i++ * ++i * ++i / i));
    printf("%d", (i++ + ++i - ++i + ++i));
    return 0;
}