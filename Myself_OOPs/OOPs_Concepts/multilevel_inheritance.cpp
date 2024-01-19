#include <iostream>
using namespace std;

class A {
    protected:
    string name;

    public:
    A() {}

    A(string name) {
        this->name = name;
    }
};

class B:public A {
    public:
    B(string name):A(name) {}

    void print() {
        cout << name << " in class B" << endl;
    }
};

class C:public B {
    public:
    C(string name):B(name) {}

    void print() {
        cout << name << " in class C" << endl;
    }
};

int main() {
    // A a("Rohit");
    B b("Rohit");
    C c("Kohli");
    b.print();
    c.print();
    return 0;
}