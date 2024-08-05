#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30, d = 40, e;
    int *p = &a, *q = &b, *r = &c, *s = &d;
    cout << p << endl;
    cout << q+1 << endl;
    cout << q << endl;
    cout << p-1 << endl;
    return 0;
}