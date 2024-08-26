#include <stdio.h>

int main() {

    /* ============= Varient 1 =============== */
    // int x = 10, y = 20, z = 30;
    // printf("%d %d %d");

    /* ============= Varient 2 =============== */
    // signed int a = -1;
    // unsigned int b = -1;

    // if(a == b) {
    //     printf("%d %d", a, b);
    // } else {
    //     printf("Not equal");
    // }

    /* ============= Varient 3 =============== */
    char c = '0';
    printf("%d, %d\n", sizeof(c), sizeof('0'));

    return 0;
}