#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fibonacci(int a, int b, int n) {
    if(n > 0) {
        cout << a << " ";
        fibonacci(b, a+b, n-1);
    }
}

int main() {
    int a = 0, b = 1, n;
    cout << "Enter how many elements of fibonacci series you want to print: ";
    cin >> n;
    fibonacci(a, b, n);
    return 0;
}