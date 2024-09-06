#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    if(*(char *)(str1 + 2) == *(str2 + 3)) {
        printf("Equal\n");
    } else {
        printf("Not equal\n");
    }

    return 0;
}