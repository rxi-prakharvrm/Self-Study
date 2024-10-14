#include <stdio.h>

// int a = 10;

void f() {
    static int a = 10;
    a++;
    printf("%d\n", a);
}

int main() {
    f();
    f();
    f();
    return 0;
}
