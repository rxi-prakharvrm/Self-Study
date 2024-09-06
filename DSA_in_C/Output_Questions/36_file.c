#include <stdio.h>

int main() {
    char *s = "abcdef";
    s++;
    printf("%c", *s);
    return 0;
}