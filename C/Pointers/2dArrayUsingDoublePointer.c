#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 5;
    int c = 4;
    
    int **r_ptr = (int**)malloc(r * sizeof(int*));
    
    for(int i = 0; i < r; i++) {
        r_ptr[i] = (int*)malloc(c * sizeof(int));
    }
    
    int count = 1;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            r_ptr[i][j] = count;
            count++;
        }
    }
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%4d ", r_ptr[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < r; i++) {
        free(r_ptr[i]);
    }
    
    free(r_ptr);
    
    return 0;
}