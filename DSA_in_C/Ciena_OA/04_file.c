#include <stdio.h>

int main() {
    char *str = "test\0\0";
    printf("%s", str);
    return 0;
}