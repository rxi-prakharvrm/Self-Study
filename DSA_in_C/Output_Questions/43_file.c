#include <stdio.h>

int main() {
    int *ptr = NULL;
    if (*ptr == 0) {
        printf("NULL pointer access\n");
    }
    return 0;
}