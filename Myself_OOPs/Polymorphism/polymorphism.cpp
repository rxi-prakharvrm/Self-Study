#include <iostream>
using namespace std;

class Employee {
    string name;
    string company;
    int age;

    public:

    Employee(string name, string company, int age)  {
        this->name = name;
        this->company = company;
        this->age = age;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setCompany(string company) {
        this->company = company;
    }

    string getCompany() {
        return company;
    }

    void setAge(int age) {
        if(age >= 18)
            this->age = age;
    }

    int getAge() {
        return age;
    }

    void introduceYourself() {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25);
    // Employee employee1("Saldina", "YT-CodeBeauty", 25);
    // employee1.introduceYourself();

    Employee employee2("John", "Amazon", 35);
    // employee2.introduceYourself();

    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;
    return 0;
}