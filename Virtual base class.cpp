#include <iostream>
using namespace std;

// Virtual base class
class Student {
protected:
    int rollNo;
    string name;
public:
    Student(int r = 0, string n = "") : rollNo(r), name(n) {}
};

// Derived classes with virtual inheritance
class Test : virtual public Student {
protected:
    int marks1, marks2;
public:
    Test(int m1 = 0, int m2 = 0) : marks1(m1), marks2(m2) {}
};

class Sports : virtual public Student {
protected:
    int sportScore;
public:
    Sports(int s = 0) : sportScore(s) {}
};

// Derived from both Test and Sports
class Result : public Test, public Sports {
public:
    Result(int r, string n, int m1, int m2, int s)
        : Student(r,
