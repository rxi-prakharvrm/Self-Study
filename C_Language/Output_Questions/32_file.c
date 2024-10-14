#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p1 = malloc(sizeof(int));
    int *p2 = p1;
    free(p1);
    *p2 = 10;
    printf("%d", *p2);
    return 0;
}