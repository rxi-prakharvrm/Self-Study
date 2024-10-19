#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b % a == 0) {
        return a;
    }
    return gcd(b % a, a);
}

int main() {
    cout << gcd(77, 66);
    return 0;
}