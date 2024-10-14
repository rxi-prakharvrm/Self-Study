/*

    1
   232
  34543
 4567654
567898765

*/

#include <stdio.h>

int main() {
    int row = 5;

    for(int i = 1; i <= row; i++) {

        for(int space = row - i; space >= 1; space--) {
            printf("  ");
        }

        int num = i;
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        num--;
        for(int k = i+1; k <= 2*i-1; k++) {
            num--;
            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}