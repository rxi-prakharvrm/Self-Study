#include <stdio.h>
#include <stdlib.h>

int main() {
    int row = 3, col = 4;
    int *arr = (int*)calloc(row*col, sizeof(int));
    int count = 1;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            *(arr + j + (i * col)) = count++;
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%-3d", *(arr + j + (i * col)));
        }
        printf("\n");
    }

    return 0;
}
