#include <iostream>
using namespace std;

class Employee{
    public:
    virtual void print() {
        cout << "Employee is working" << endl;
    }
};

class Developer:public Employee {
    public:
    void print() {
        cout << "Developer is coding" << endl;
    }
};

class Teacher:public Employee {
    public:
    void print() {
        cout << "Teacher is teaching" << endl;
    }
};

class Actor:public Employee {
    public:
    void print() {
        cout << "Actor is acting" << endl;
    }
};

class Musician:public Employee {
    public:
    void print() {
        cout << "Musician is composing songs" << endl;
    }
};

int main() {
    // child class objects
    Developer d;
    Teacher t;
    Actor a;
    Musician m;
    
    // pointer to Employee object is pointing to the addresses of the derived classes' objects (this is the rule)
    Employee *e1 = &d;
    Employee *e2 = &t;
    Employee *e3 = &a;
    Employee *e4 = &m;

    e1->print();
    e2->print();
    e3->print();
    e4->print();
    return 0;
}