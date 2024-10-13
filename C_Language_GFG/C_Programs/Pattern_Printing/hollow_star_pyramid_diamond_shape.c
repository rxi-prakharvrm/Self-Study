/*

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int row = 4;

    for(int i = -row; i <= row; i++) {

        for(int space = 1; space <= abs(i); space++) {
            printf(" ");
        }

        for(int j = 1; j <= 2*(row-abs(i)+1)-1; j++) {
            if(j == 1 || j == 2*(row-abs(i)+1)-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");

    }

    return 0;
}