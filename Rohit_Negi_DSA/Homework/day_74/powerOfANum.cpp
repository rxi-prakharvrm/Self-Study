#include <iostream>
using namespace std;

void power(int base, int exponent, int res) {
    if(exponent == 0) cout << res << endl;
    res *= base;
    power(base, exponent - 1, res);
}

int main() {
    int base, exponent, res = 1;
    cout << "Enter the base and the exponent: ";
    cin >> base >> exponent;
    power(base, exponent, res);
    return 0;
}