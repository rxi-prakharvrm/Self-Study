#include <stdio.h>

int main() {
    // Writing to the file using fwrite()
    FILE *fp2 = fopen("file.txt", "wb");
    if (fp2 == NULL) {
        printf("File not found!\n");
    } else {
        int num = 10;
        fwrite(&num, sizeof(int), 1, fp2);
        fclose(fp2);
    }

    // Reading from the file using fread()
    FILE *fp3 = fopen("file.txt", "rb");
    if (fp3 == NULL) {
        printf("File not found!\n");
    } else {
        int num;
        fread(&num, sizeof(int), 1, fp3);
        printf("Number: %d\n", num);
        fclose(fp3);
    }

    return 0;
}