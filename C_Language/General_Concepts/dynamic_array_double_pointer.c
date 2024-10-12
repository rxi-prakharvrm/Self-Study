#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 3, c = 4;
    
    // Allocate memory for rows
    int **arr = (int **) malloc(r * sizeof(int *));
    for(int i = 0; i < r; i++) {
        arr[i] = (int *) malloc(c * sizeof(int));
    }
    
    // Fill the array with values
    int count = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            arr[i][j] = ++count;
        }
    }
    
    // Print the array
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    // Free the allocated memory properly
    for(int i = 0; i < r; i++) {
        free(arr[i]); // Free each row first
    }
    free(arr); // Finally, free the top-level pointer array
    
    return 0;
}
