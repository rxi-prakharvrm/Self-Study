#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10;
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int *p = (int *)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++) {
        p[i] = a * (i + 1);
    }

    p = (int *)realloc(p, 2 * n * sizeof(int));

    for(int i = n; i < n * 2; i++) {
        p[i] = a * (i + 1);
    }

    for(int i = 0; i < n * 2; i++) {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}