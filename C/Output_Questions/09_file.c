#include <stdio.h>

int main() {
    int x = 5;
    if(x == x) {
        printf("Equal\n");
    }

    if(-0) {
        printf("inside if\n");
    } else {
        printf("inside else\n");
    }

    return 0;
}