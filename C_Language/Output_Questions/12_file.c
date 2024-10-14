#include <stdio.h>

int main() {
    char s[] = "abcdef";
    printf("%c", *(s + s[1] - s[0]));
    return 0;
}