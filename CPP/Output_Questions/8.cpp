#include <iostream>
using namespace std;

int f1(int);
void f1(float);

int main() {
    f1(4);
    f1(2.34f);
    return 0;
}

int f1(int x) {
    cout << "int f1(int)" << endl;
    return x;
}

void f1(float y) {
    cout << "void f1(float)" << endl;
}