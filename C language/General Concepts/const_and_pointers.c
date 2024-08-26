// C program to demonstrate the down qualification

#include <stdio.h>

int main(void){
    int new = 50;
    int a1 = 10, a2 = 20, a3 = 30, a4 = 40, a5 = 50, a6 = 60, a7 = 70;
    
    const int *ptr1 = &a1;
    // *ptr1 = 100; // Error: assignment of read-only location '*ptr1'
    // ptr1 = &new; // Valid
    int const *ptr2 = &a2;
    // *ptr2 = 100; // Error: assignment of read-only location '*ptr2'
    // ptr2 = &new; // Valid
    int *const ptr3 = &a3;
    // *ptr3 = 100; // Valid
    // ptr3 = &new; // Error: assignment of read-only location 'ptr3'
    const int *const ptr4 = &a4;
    // *ptr4 = 100; // Error: assignment of read-only location '*ptr4'
    // ptr4 = &new; // Error: assignment of read-only location 'ptr4'
    int const *const ptr5 = &a5;
    // *ptr5 = 100; // Error: assignment of read-only location '*ptr5'
    // ptr5 = &new; // Error: assignment of read-only location 'ptr5'
    const int const *ptr6 = &a6;
    // *ptr6 = 100; // Error: assignment of read-only location '*ptr6'
    // ptr6 = &new; // Valid
    int const const *ptr7 = &a7;
    // *ptr7 = 100; // Error: assignment of read-only location '*ptr7'
    // ptr7 = &new; // Valid
    return 0;
}
