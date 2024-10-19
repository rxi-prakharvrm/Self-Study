// This is a problem in overriding
#include <iostream>
using namespace std;

class A1 {
    public:
    void f1() {cout << "A1->f1" << endl;}
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
    p = new B; // The object of type B will be pointed by the pointer at the run time (Late Binding)

    // It will call the function f1 of the class A1 because pointer p is of type A1
    // It will not call the function f1 of the class B1 because at the compile time pointer p doesn't get any memory
    p->f1(); // Binding is done at the compile time (Early Binding)
    return 0;
}