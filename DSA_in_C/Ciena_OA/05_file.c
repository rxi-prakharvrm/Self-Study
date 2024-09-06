#include <stdio.h>

int main() {
    char *str = "examination";
    *str = 'E';
    printf("%s", str);
    return 0;
}