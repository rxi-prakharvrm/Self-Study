// Function overrinding vs function hiding
#include <iostream>
using namespace std;

class A1 {
    public:
    void f1() {cout << "A1->f1" << endl;}
};

class A2 {
    public:
    void f1(int x) {cout << "A2->f1" << endl;}
};

// Multiple inheritance
class B:public A1, public A2 {
    public:
    void f1(int y) {cout << "A2->f1" << endl;}
};

int main() {
    B obj;
    // obj.f1();
    obj.f1(10);
    return 0;
}