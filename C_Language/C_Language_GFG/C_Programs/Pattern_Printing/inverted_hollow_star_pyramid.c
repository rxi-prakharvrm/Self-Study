/* 

*********
 *     *
  *   *
   * *
    *

*/

#include <stdio.h>

int main() {
    int row = 5;

    for(int i = row; i >= 1; i--) {

        for(int space = 1; space <= row-i; space++) {
            printf(" ");
        }

        for(int j = 2*i-1; j >= 1; j--) {
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