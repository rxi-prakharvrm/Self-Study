/*

      *
    *   *
   *     *
  *       *
 ***********

*/

#include <stdio.h>

int main() {
    int row = 5;

    for(int i = 1; i <= row; i++) {

        for(int space = row - i; space >= 1; space--) {
            printf(" ");
        }

        for(int j = 1; j <= 2*i-1; j++) {
            if(i == row || j == 1 || j == 2*i-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}