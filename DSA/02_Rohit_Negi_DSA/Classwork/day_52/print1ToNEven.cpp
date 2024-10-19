#include <iostream>
using namespace std;

void print1ToN(int n) {
    if(n == 0) return;
    print1ToN(n-2);      
    cout << n << " ";
}

int main() {
    int n = 11;
    if(n % 2 == 1) {
        n--;
    }
    print1ToN(n);
    return 0;
}