#include <stdio.h>

int main() {
    int i = 1;
    switch(i = printf("hi")) {
        case '1':
            printf("case-1\n");
            break;
        case '2':
            printf("case-2\n");
            break;
        default:
            printf("none of the above\n");
    }
    return 0;
}