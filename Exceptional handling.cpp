#include <iostream>
#include <stdexcept>
using namespace std;

// Function that performs safe division
double safeDiv(double a, double b) {
    if (b == 0)
        throw runtime_error("Division by zero attempted");
    return a / b;
}

int main() {
    double x, y;
    cout << "Enter numerator and denominator: ";
    cin >> x >> y;

    try {
        double result = safeDiv(x, y);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& ex) {
        cout << "Error: " << ex.what() << endl;
    }

    cout << "Program continues after handling exception." << endl;

    return 0;
}
