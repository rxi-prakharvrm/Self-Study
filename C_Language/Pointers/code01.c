#include <stdio.h>
#include <string.h>

int main() {
    char *str1 = "Hello";
    char str2[] = {'H', 'e', 'l', 'l', 'o', 'o', 'o', 'l', 'l', 'o', '\0'};
    printf("%d\n", sizeof(str1));
    printf("%d\n", sizeof(str2));
    printf("%d\n", strlen(str1));
    printf("%d\n", strlen(str2));
    return 0;
}