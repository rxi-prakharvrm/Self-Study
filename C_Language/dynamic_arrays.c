#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Using a single pointer and a 1D array with pointer arithmetic */

    // int r = 3, c = 4;
    // int *p = (int *)malloc(r * c * sizeof(int));

    // for(int i = 0; i < r * c; i++) {
    //     p[i] = i + 1;
    // }

    // for(int i = 0; i < r; i++) {
    //     for(int j = 0; j < c; j++) {
    //         printf("%d ", p[i * c + j]);
    //     }
    //     printf("\n");
    // }

    /* Using pointer to a pointer */

    int r = 3, c = 4, i, j, count;

    printf("%d\n", sizeof(int*));

    int** arr = (int**)malloc(r * sizeof(int*));
    for (i = 0; i < r; i++)
        arr[i] = (int*)malloc(c * sizeof(int));

    // Note that arr[i][j] is same as *(*(arr+i)+j)
    count = 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = ++count; // OR *(*(arr+i)+j) = ++count

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);

    /* Code for further processing and free the
       dynamically allocated memory */

    for (int i = 0; i < r; i++)
        free(arr[i]);

    free(arr);

    return 0;
}