#include <stdio.h>
#include <errno.h>

int main() {
    FILE* fptr = fopen("newfile.txt", "w");

    if(fptr == NULL) {
        perror("File doesn't exist!");
    } else {
        printf("File opened successfully!");
    }

    return 0;
}
