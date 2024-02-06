#include <iostream>
using namespace std;

void fact(int n, int f) {
    if(n == 1) {
        cout << f << endl;
        return;
    }
    f *= n;
    fact(n-1, f);
}

int main() {
    fact(6, 1);
    return 0;
}