#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 5;
    int c = 4;
    
    char **r_ptr = (char**)malloc(r * sizeof(char*));
    
    for(int i = 0; i < r; i++) {
        r_ptr[i] = (char*)malloc(c * sizeof(char));
    }
    
    char count = 'a';
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            r_ptr[i][j] = count;
            count++;
        }
    }
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%4c ", r_ptr[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < r; i++) {
        free(r_ptr[i]);
    }
    
    free(r_ptr);
    
    return 0;
}