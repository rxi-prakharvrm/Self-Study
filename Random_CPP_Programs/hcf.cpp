#include <iostream>
using namespace std;

int hcf(int a, int b) {
    if(a % b == 0) return b;
    return hcf(b, a % b);
}

int main() {
    int a = 100, b = 15;
    int res = hcf(a, b);
    cout << "HCF of " << a << " and " << b << " is: " << res << endl;
    return 0;
}