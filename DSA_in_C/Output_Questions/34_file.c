#include <stdio.h>

void func(char **p) {
    printf("%c", **p);
}

int main() {
    char *str = "Hello";
    func(&str);
    return 0;
}