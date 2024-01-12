#include <iostream>
using namespace std;

int f1(int);
void f1(float);

int main() {
    int x = 'A';
    f1(x);
    // cout << x << endl;
    return 0;
}

int f1(int x) {
    cout << "int f1(int)" << endl;
    return x;
}

void f1(float y) {
    cout << "void f1(float)" << endl;
}