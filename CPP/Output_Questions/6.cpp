// This is a problem in overriding
#include <iostream>
using namespace std;

class A1 {
    public:
    virtual void f1() {cout << "A1->f1" << endl;}
};

class A2 {
    public:
    void f1() {cout << "A2->f1" << endl;}
};

// Multiple inheritance
class B:public A1, public A2 {
    public:
    void f1() {cout << "A2->f1" << endl;}
};

int main() {
    A1 *p;
    p = new B;
    p->f1();
    return 0;
}