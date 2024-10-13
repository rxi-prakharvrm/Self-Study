/*

15 14 13 12 11
10  9  8  7
 6  5  4
 3  2
 1

*/

#include <stdio.h>

int main() {
    int row = 5;
    int num = row * (row + 1) / 2;

    for(int i = row; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%3d", num--);
        }
        printf("\n");
    }

    return 0;
}