#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    int rollNo;
    string name;
public:
    void setStudent(int r, string n) {
        rollNo = r;
        name = n;
    }
    void showStudent() const {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

// Derived classes with virtual inheritance
class Test : virtual public Student {
protected:
    float marks;
public:
    void setMarks(float m) { marks = m; }
    void showMarks() const { cout << "Test Marks: " << marks << endl; }
};

class Sports : virtual public Student {
protected:
    float score;
public:
    void setScore(float s) { score = s; }
    void showScore() const { cout << "Sports Score: " << score << endl; }
};

// Derived from both Test and Sports
class Result : public Test, public Sports {
public:
    void showResult() const {
        showStudent();   // Single Student instance
        showMarks();
        showScore();
        cout << "Total Score: " << (marks + score) << endl;
    }
};

int main() {
    Result r1;
    r1.setStudent(101, "Ravi");
    r1.setMarks(85.5);
    r1.setScore(10.0);

    r1.showResult();

    return 0;
}
