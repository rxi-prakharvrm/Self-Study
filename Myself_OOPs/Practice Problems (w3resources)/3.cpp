#include <bits/stdc++.h>
using namespace std;

class Person {
    private:
    string name;
    string country;
    int age;

    public:
    void setName(const string &name) {
        this->name = name;
    }

    void setCountry(const string &country) {
        this->country = country;
    }

    void setAge(const int &age) {
        this->age = age;
    }

    string getName() {
        return this->name;
    }

    string getCountry() {
        return this->country;
    }

    int getAge() {
        return this->age;
    }   

};

int main() {
    Person *P1 = new Person();

    // set values
    P1->setName("Saveli Sujatha");
    P1->setCountry("USA");
    P1->setAge(25);

    // get values
    cout << P1->getName() << endl;
    cout << P1->getCountry() << endl;
    cout << P1->getAge() << endl;

    return 0;
}