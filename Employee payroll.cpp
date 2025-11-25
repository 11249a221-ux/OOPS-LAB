#include <iostream>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    float salary;

    void display() {
        cout << "Employee ID: " << empId
             << ", Name: " << name
             << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee e1, e2;

    e1.empId = 201;
    e1.name = "Alice";
    e1.salary = 55000.50;

    e2.empId = 202;
    e2.name = "Bob";
    e2.salary = 62000.75;

    e1.display();
    e2.display();

    return 0;
}
