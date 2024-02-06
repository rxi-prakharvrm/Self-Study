#include <iostream>
using namespace std;

class Manager {
    string name;
    int age;
    int salary;

    public:
    Manager() {}

    Manager(string name, int age, int salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void print() {
        cout << name << " is " << age << " years old. His/Her salary is: $" << salary << " per annum" << endl;
    }
};

int main() {
    Manager managerArr[3];

    managerArr[0] = Manager("Denver", 25, 125000);
    managerArr[1] = Manager("Bruce Wayne", 28, 145000);
    managerArr[2] = Manager("Williams", 38, 155000);

    for(int i = 0; i < 3; i++) {
        managerArr[i].print();
    }
    return 0;
}