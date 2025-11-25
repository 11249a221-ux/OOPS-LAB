#include <iostream>
using namespace std;

class Employee {
protected:
    string name;

public:
    Employee(const string& n = "") : name(n) {}

    virtual double calculateSalary() { return 0.0; } // virtual function

    virtual void show() {
        cout << "Employee: " << name << ", Salary: " << calculateSalary() << endl;
    }

    virtual ~Employee() {}
};

class FullTime : public Employee {
    double basic, bonus;

public:
    FullTime(const string& n, double b, double bo) : Employee(n), basic(b), bonus(bo) {}

    double calculateSalary() override { return basic + bonus; }

    void show() override {
        cout << "FullTime: " << name << ", Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee* e1 = new Employee("Generic Employee");
    FullTime* f1 = new FullTime("Ravi", 50000, 5000);

    e1->show();
    f1->show();

    // Demonstrating polymorphism
    Employee* e2 = f1; 
    e2->show();  // Calls FullTime's show() because of virtual function

    delete e1;
    delete f1;

    return 0;
}
