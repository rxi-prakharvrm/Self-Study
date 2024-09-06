#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    *ptr = 5;
    free(ptr);
    printf("%d", *ptr);
    return 0;
}