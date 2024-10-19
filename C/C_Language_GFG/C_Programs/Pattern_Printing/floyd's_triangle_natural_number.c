/*

 1
 2  3
 4  5  6
 7  8  9 10
11 12 13 14 15

*/

#include <stdio.h>

int main() {
    int row = 5;
    int num = 1;

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%3d", num++);
        }
        printf("\n");
    }

    return 0;
}