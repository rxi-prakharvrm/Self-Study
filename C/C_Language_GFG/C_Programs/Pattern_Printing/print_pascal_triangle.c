/*

    1
   121
  12321
 1234321
123454321

*/

#include <stdio.h>

int main() {
    int row = 10;

    for(int i = 1; i <= row; i++) {

        for(int space = 1; space <= row-i; space++) {
            printf("   ");
        }

        int num = 1;
        for(int j = 1; j <= i; j++) {
            printf("%3d", num);
            num++;
        }

        num--;
        for(int j = i+1; j <= 2*i-1; j++) {
            num--;
            printf("%3d", num);
        }

        printf("\n");

    }

    return 0;
}