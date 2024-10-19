#include <stdio.h>
#define n 3

void interchangeFirstLast(int mat[][n]) {
    for(int i = 0; i < n; i++) {
        int temp = mat[i][0];
        mat[i][0] = mat[i][2];
        mat[i][2] = temp;
    }
}

// Driver code 
int main() 
{ 
    // input matrix 
    int mat[n][n] 
        = { { 2, 4, 6 }, { 8, 2, 3 }, { 1, 9, 4 } }; 
  
    // print input matrix 
    printf("Input Matrix: \n"); 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            printf("%d ", mat[i][j]); 
        } 
        printf("\n"); 
    } 
  
    // call interchangeFirstLast(mat) function. 
    // This function swap the element of first and last 
    // columns. 
  
    interchangeFirstLast(mat); 
  
    // print output matrix
    printf("Output Matrix: \n"); 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            printf("%d ", mat[i][j]); 
        } 
        printf("\n"); 
    } 
}