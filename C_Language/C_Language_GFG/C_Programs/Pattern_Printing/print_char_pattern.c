/*

A 
B B 
C C C 
D D D D 
E E E E E 

*/

#include <stdio.h>

int main() {
    int row = 'E';
    
    for(char i = 'A'; i <= row; i++) {
        for(char j = 'A'; j <= i; j++) {
            printf("%c ", i);
        }
        printf("\n");
    }

    return 0;
}