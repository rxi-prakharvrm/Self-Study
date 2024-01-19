#include <iostream>
using namespace std;

// abstract class (Interface in Java)
class AbstractEmployee {
    virtual void askForPromotion() = 0; // pure virtual function (abstract function)
};

class Employee:AbstractEmployee {
    protected:

    string name;
    string company;
    int age;

    public:

    Employee() {}

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

    void askForPromotion() {
        if(age > 30) {
            cout << name << " got promoted!" << endl;
        } else {
            cout << "Sorry, no promotion for you!" << endl;
        }
    }

    void work() {
        cout << name << " is checking email, task backlog, performing tasks etc" << endl;
    }
};

class Developer:public Employee {
    public:
    string favProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage):Employee(name, company, age) {
        this->favProgrammingLanguage = favProgrammingLanguage;
    }

    void fixBug() {
        cout << name << " is fixing bug using " << favProgrammingLanguage << endl;
    }

    void work() {
        cout << name << " is writing " << favProgrammingLanguage << endl;
    }
};

class Teacher:public Employee {
    public:
    string subject;

    Teacher(string name, string company, int age, string subject):Employee(name, company, age) {
        this->subject = subject;
    }

    void prepareLesson() {
        cout << name << " is preparing " << subject << " lesson." << endl;
    }

    void work() {
        cout << name << " is teaching " << subject << endl;
    }
};

// This most common use of polymorphism is when a parent class reference is used to refer to a child class object

int main() {
    Developer d("Saldina", "YT-CodeBeauty", 25, "C++");
    Teacher t("John", "Code School", 40, "History");
    Employee *e1 = &d;
    Employee *e2 = &t;
    e1->work();
    e2->work();
    return 0;
}