#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1-D Array
    int A[3] = {1, 2, 3};

    cout << endl << "Addresses in 1-D arrays - " << endl;
    cout << A << endl;
    cout << (A+0) << endl;
    cout << &A[0] << endl;
    cout << &A << endl;

    cout << endl << "Values in 1-D arrays - " << endl;
    cout << *A << endl;
    cout << *(A+0) << endl;
    cout << A[0] << endl;

    // Pointers to 1-D arrays
    int *PA = A;

    cout << endl << "Addresses through pointers in 1-D arrays - " << endl;
    cout << PA << endl;
    cout << (PA+0) << endl;
    cout << &PA[0] << endl;

    cout << endl << "Values through pointers in 1-D arrays - " << endl;
    cout << *PA << endl;
    cout << *(PA+0) << endl;
    cout << PA[0] << endl;

    // 2-D Array
    int B[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    cout << endl << "Addresses in 2-D arrays - " << endl;
    cout << B << endl;
    cout << *B << endl;
    cout << *(B+0) << endl;
    cout << B[0] << endl;
    cout << &B[0][0] << endl;

    cout << endl << "Values is 2-D arrays - " << endl;
    cout << **B << endl;
    cout << **(B+0) << endl;
    cout << *(B+0)[0] << endl;
    cout << *(*(B+0)+0) << endl;
    cout << *B[0] << endl;
    cout << B[0][0] << endl;

    // Pointer-to-pointer
    int (*PB)[2] = B;

    cout << endl << "Addresses through pointers in 2-D arrays - " << endl;
    cout << PB << endl;
    cout << *PB << endl;
    cout << *(PB+0) << endl;
    cout << &PB[0] << endl;
    cout << &(*PB) << endl;

    cout << endl << "Values through pointers in 2-D arrays - " << endl;
    cout << **PB << endl;
    cout << *(PB[0]) << endl;
    cout << *(*(PB+0)+0) << endl;
    cout << PB[0][0] << endl;

    // 3-D arrays
    int C[3][2][2] = {{{1, 2}, {3, 4}},
                     {{5, 6}, {7, 8}},
                     {{9, 10}, {11, 12}}};

    cout << endl << "Addresses in 3-D arrays - " << endl;
    cout << C << endl;
    cout << *C << endl;
    cout << *(C+0) << endl;
    cout << **C << endl;
    cout << *(*(C+0)+0) << endl;
    cout << C[0] << endl;
    cout << C[0][0] << endl;

    cout << endl << "Values in 3-D arrays - " << endl;
    cout << C[0][0][0] << endl;
    cout << *(C[0][0]) << endl;
    cout << **(C[0]) << endl;
    cout << ***C << endl;

    // Character pointers

    // Experiment time (Guess the output?)
    cout << endl << "Experiment time - " << endl;
    cout << *(*(PB+2)+1) << endl;
    cout << *(*(B+1)+1) << endl;
    cout << *(B[0]+2) << endl;
    cout << (*(PB+1))[1] << endl;

    return 0;
}