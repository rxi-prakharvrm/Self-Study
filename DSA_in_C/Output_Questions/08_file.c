#include <stdio.h>

int main() {
    char s[] = "xyz";
    char *p = s;
    while (*p)
        printf("%c", ++*p++);
    return 0;
}