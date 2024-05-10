#include <iostream>
using namespace std;

void printNto1(int n) {
    if(n == 0) {
        return; 
    }
    cout << n << " ";
    printNto1(n-2);
}

int main() {
    // given that n is even
    int n = 14;
    printNto1(n);
    return 0;
}