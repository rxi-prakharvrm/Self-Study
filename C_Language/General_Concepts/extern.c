#include <stdio.h>
#include "extern_file.h"

extern int var;

// external variable declared and defined simultaneously, it will generate a warning
// extern int global_extern_var = 500;

int main() {
    // printf("%d", global_extern_var);
    printf("%d\n", var);
    return 0;
}
