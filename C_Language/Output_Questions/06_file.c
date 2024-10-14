#include <stdio.h>

void func(char *str) {
    *str = 'H';
    printf("%s", str);
}

int main() {
    // char *str = "hello";
    char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    func(str);
    return 0;
}