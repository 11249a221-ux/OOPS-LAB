#include <iostream>
using namespace std;

class Account {
public:
    int accNo;
    string name;
    float balance;

    void display() {
        cout << "Account No: " << accNo
             << ", Name: " << name
             << ", Balance: " << balance << endl;
    }
};

int main() {
    Account a1, a2;

    a1.accNo = 1001;
    a1.name = "Alice";
    a1.balance = 5000.75;

    a2.accNo = 1002;
    a2.name = "Bob";
    a2.balance = 7500.50;

    a1.display();
    a2.display();

    return 0;
}
