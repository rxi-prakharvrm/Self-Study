#include <iostream>
using namespace std;

void printOdd(int n) {
    if(n == 0) return;
    if(n % 2 != 0) cout << n << endl;
    printOdd(n - 1);
}

int main() {
    int n;
    cout << "Enter the value of n till you want to print the odd numbers: ";
    cin >> n;
    printOdd(n);
    return 0;
}