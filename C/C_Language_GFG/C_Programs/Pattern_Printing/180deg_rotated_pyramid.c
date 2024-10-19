/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

#include <stdio.h>

int main() {
    int row = 5;

    for(int i = row; i >= 1; i--) {

        for(int itr = 1; itr < row - i + 1; itr++) {
            printf("  ");
        }

        for(int j = 2*i-1; j >= 1; j--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}