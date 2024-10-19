// cannot overload functions distinguished by return type alone
#include <iostream>
using namespace std;

int f1(int);
void f1(int);

int main() {
    int y = f1(4);
    return 0;
}

int f1(int x) {
    cout << "int f1(int)" << endl;
    return x;
}

void f1(int y) {
    cout << "void f1(int)" << endl;
}