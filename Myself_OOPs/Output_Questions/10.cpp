// more than one instance of overloaded function "f1" matches the argument list
#include <iostream>
using namespace std;

int f1(double);
void f1(float);

int main() {
    int x = 'A';
    f1(x);
    // cout << x << endl;
    return 0;
}

int f1(double x) {
    cout << "int f1(double)" << endl;
    return x;
}

void f1(float y) {
    cout << "void f1(float)" << endl;
}