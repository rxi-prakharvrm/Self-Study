#include <stdio.h>
#include <stdlib.h>

int main() {
    int row = 3, col = 4;
    char count = 'A';

    int **arr = (int**)calloc(row, sizeof(int*)); // 24 bytes

    for(int i = 0; i < row; i++) {
        *(arr + i) = (int*)calloc(col, sizeof(int)); // 16 bytes
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            *(*(arr + i) + j) = count++;
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%-3c", *(*(arr + i) + j));
        }
        printf("\n");
    }

    return 0;
}