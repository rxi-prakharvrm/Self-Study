// C program to demonstrate the down qualification

#include <stdio.h>

int main(void){
    int a = 10;
    int *p = &a;
    printf("%d\n", p);
    *p = p;
    printf("%d\n", *p);
    return 0;
}
