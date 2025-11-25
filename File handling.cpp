#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Write sample records
    ofstream fout("students.txt");
    if (!fout) {
        cerr << "Cannot create file\n";
        return 1;
    }

    fout << "101 John 85\n";
    fout << "102 Alice 90\n";
    fout << "103 Bob 78\n";
    fout.close();

    // Read records back
    ifstream fin("students.txt");
    if (!fin) {
        cerr << "Cannot open file\n";
        return 1;
    }

    int rollNo, marks;
    string name;
    cout << "Student Records:\n";
    while (fin >> rollNo >> name >> marks) {
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", Marks: " << marks << endl;
    }
    fin.close();

    return 0;
}
