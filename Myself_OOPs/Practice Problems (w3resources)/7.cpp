#include <bits/stdc++.h>

class Employee {
    private:
    std::string name;
    int empId;
    double salary;

    public:
    Employee(const std::string &name, int empId, double salary) {
        this->name = name;
        this->empId = empId;
        this->salary = salary;
    }

    void calculateSalary(double performanceRating) {
        if(performanceRating >= 0.0 && performanceRating <= 1.0) {
            salary *= performanceRating;
        } else {
            std::cout << "Invalid performance rating. Salary remains unchanged." << std::endl;
        }
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    std::string getName() const {
        return name;
    }

    int getEmpId() const {
        return empId;
    }

    double getSalary() const {
        return salary;
    }

};

int main() {
    std::string empName;
    int empId;
    double empSalary;

    std::cout << "Input employee name: ";
    std::cin >> empName;

    std::cout << "Input employee ID: ";
    std::cin >> empId;

    std::cout << "Input employee salary: ";
    std::cin >> empSalary;

    Employee employee(empName, empId, empSalary);

    std::cout << "Initial salary: " << employee.getSalary() << std::endl;

    double performanceRating;

    std::cout << "Input performance rating (0.0-1.0): ";
    std::cin >> performanceRating;

    employee.calculateSalary(performanceRating);

    std::cout << "Updated salary: " << employee.getSalary() << std::endl;

    return 0;
}