#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int *p = arr;
    printf("%d", *(p++) + *p);
    return 0;
}