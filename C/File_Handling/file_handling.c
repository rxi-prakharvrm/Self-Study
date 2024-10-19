#include <stdio.h>

int main() {
    // Writing to the file
    FILE *fp1 = fopen("file.txt", "w");
    if (fp1 == NULL) {
        printf("File not found!\n");
    } else {
        fprintf(fp1, "This is a sample text.");
        fclose(fp1);

        // Reading from the file using fscanf()
        FILE *fp2 = fopen("file.txt", "r");
        if (fp2 == NULL) {
            printf("File not found!\n");
        } else {
            char word[20];
            char word2[20];
            fscanf(fp2, "%s %s", word, word2);
            printf("Word1, Word2 : %s %s\n", word, word2);

            // Using fseek() with SEEK_SET
            fseek(fp2, 0, SEEK_SET);
            long pos = ftell(fp2);
            printf("Position after SEEK_SET: %ld\n", pos);

            // Using fseek() with SEEK_CUR
            fseek(fp2, 5, SEEK_CUR);
            pos = ftell(fp2);
            printf("Position after SEEK_CUR: %ld\n", pos);

            // Using fseek() with SEEK_END
            fseek(fp2, -5, SEEK_END);
            pos = ftell(fp2);
            printf("Position after SEEK_END: %ld\n", pos);

            // Using rewind()
            rewind(fp2);
            pos = ftell(fp2);
            printf("Position after rewind: %ld\n", pos);

            fclose(fp2);
        }

        // Appending to the file using fputc()
        FILE *fp3 = fopen("file.txt", "a");
        if (fp3 == NULL) {
            printf("File not found!\n");
        } else {
            fputc('\n', fp3);
            fputc('A', fp3);
            fclose(fp3);
        }

        // Reading from the file using fgetc()
        FILE *fp4 = fopen("file.txt", "r");
        if (fp4 == NULL) {
            printf("File not found!\n");
        } else {
            int ch;
            while ((ch = fgetc(fp4)) != EOF) {
                printf("%c", ch);
            }
            fclose(fp4);
        }

        // Writing to the file using fputs()
        FILE *fp5 = fopen("file.txt", "w");
        if (fp5 == NULL) {
            printf("File not found!\n");
        } else {
            fputs("Hello, World!", fp5);
            fclose(fp5);
        }

        // Writing to the file using fwrite()
        FILE *fp6 = fopen("file.txt", "w");
        if (fp6 == NULL) {
            printf("File not found!\n");
        } else {
            int num = 42;
            fwrite(&num, sizeof(int), 1, fp6);
            fclose(fp6);
        }

        // Reading from the file using fread()
        FILE *fp7 = fopen("file.txt", "r");
        if (fp7 == NULL) {
            printf("File not found!\n");
        } else {
            int num;
            fread(&num, sizeof(int), 1, fp7);
            printf("Number: %d\n", num);
            fclose(fp7);
        }

        // Getting the current position of the file pointer using ftell()
        FILE *fp8 = fopen("file.txt", "r");
        if (fp8 == NULL) {
            printf("File not found!\n");
        } else {
            long pos = ftell(fp8);
            printf("Current position: %ld\n", pos);
            fclose(fp8);
        }
    }

    return 0;
}