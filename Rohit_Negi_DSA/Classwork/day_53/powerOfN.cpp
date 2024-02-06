#include <iostream>
using namespace std;

int powerOfN(int b, int e) {
    if(e == 0) return 1;
    return b * powerOfN(b, e-1);
}

int main() {
    int base = 2, exponent = 5;
    cout << powerOfN(base, exponent);
    return 0;
}