#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("%d\n", argc);
    int n = sizeof(argv) / sizeof(char *);

    for(int i = 0; i < n; i++) {
        printf("%s\n", argv[i]);
    }
    
    return 0;
}