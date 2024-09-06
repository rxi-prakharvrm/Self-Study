#include <stdio.h>

int main() {
    int a[] = {1, 2, 3};
    int *p = a;
    printf("%d", *++p + *p++);
    return 0;
}