#include <iostream>
using namespace std;

class Department {
public:
    string deptName;

    Department(string d) {
        deptName = d;
        cout << "Department " << deptName << " created." << endl;
    }

    ~Department() {
        cout << "Department " << deptName << " destroyed." << endl;
    }
};

class University {
    string uniName;
    Department dept;

public:
    // Constructor using initializer list for Department
    University(string u, string d) : uniName(u), dept(d) {
        cout << "University " << uniName << " initialized." << endl;
