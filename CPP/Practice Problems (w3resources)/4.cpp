#include <bits/stdc++.h>
using namespace std;

class Car {
    private:
    string company;
    string model;
    int year;

    public:
    void setCompany(string company) {
        this->company = company;
    }

    void setModel(string model) {
        this->model = model;
    }

    void setYear(int year) {
        this->year = year;
    }

    string getCompany() {
        return this->company;
    }

    string getModel() {
        return this->model;
    }

    int getYear() {
        return this->year;
    }
};

int main() {
    Car C1;

    // set values
    C1.setCompany("BMW");
    C1.setModel("M4");
    C1.setYear(2023);

    // get values
    cout << "Initial values are -------------" << endl << endl;

    cout << C1.getCompany() << endl;
    cout << C1.getModel() << endl;
    cout << C1.getYear() << endl;

    cout << endl << endl;

    // set updated values
    C1.setCompany("AUDI");
    C1.setModel("A8");
    C1.setYear(2024);

    // get updated values
    cout << "Updated values are -------------" << endl << endl;

    cout << C1.getCompany() << endl;
    cout << C1.getModel() << endl;
    cout << C1.getYear() << endl;

    return 0;
}