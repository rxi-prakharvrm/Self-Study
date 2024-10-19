#include <stdio.h>
#define LIMIT 5

int main() {
    for(int i = 0; i < LIMIT; i++) {
        printf(" [%d %d] ", i+1, LIMIT);
        #undef LIMIT // after this line we'll not be able to access LIMIT macro
        // printf("%d ", LIMIT);
    }
    return 0;
}