#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /* ============= Varient 1 =============== */
    // int x = 10, y = 20, z = 30;
    // printf("%d %d %d");

    /* ============= Varient 2 =============== */
    // signed int a = -1;
    // unsigned int b = -1;

    // if(a == b) {
    //     printf("%d %d", a, b);
    // } else {
    //     printf("Not equal");
    // }

    /* ============= Varient 3 =============== */
    // char c = '0';
    // printf("%d, %d\n", sizeof(c), sizeof('0'));
    
    //int i = 10;
    //float f = 10.2f;
    //double d = 12.79293;
    //char c = 'a';

    //printf("%d\n", sizeof(i));
    //printf("%d\n", sizeof(f));
    //printf("%d\n", sizeof(d));
    //printf("%d\n", sizeof(c));
    //printf("%d\n", sizeof(int *));
    //printf("%d\n", sizeof(float *));
    //printf("%d\n", sizeof(double *));
    //printf("%d\n", sizeof(char *));
    //

    //printf(5 + "Fascimile");
    //
    //float a = 1e2;
    //printf("%f\n", a);
    //

    //char *str = (char *)malloc(5 * sizeof(char));
    //strcpy(str, "john");
    //printf("%s\n", str);
    //
    //char *arr[5];
    //for(int i = 0; i < 1; i++) {
	//    arr[i] = (char *)malloc(5 * sizeof(char));
	//    strcpy(arr[i], "john");
	//    printf("%s\n", arr[i]);
    //}
    //
    //char *greet = "hello";
    //char *name = "John";
    //strcat(greet, name);
    //printf("%s\n", greet);

    char arr1[100] = {'a', 'b'};
    char arr2[100] = {'c', 'd'};
    printf("%d\n", strlen(arr1));
    strcat(arr1, arr2);
    printf("%d\n", strlen(arr1));

    return 0;
}
