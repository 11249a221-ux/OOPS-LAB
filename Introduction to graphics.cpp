#include <iostream>
#include <stdexcept> // For std::runtime_error
using namespace std;

// Function that performs division and throws an exception if divisor is zero
double safeDivide(double numerator, double denominator) {
    if (denominator == 0)
        throw runtime_error("Error: Division by zero is not allowed!");
    return numerator / denominator;
}

int main() {
    double a, b;
    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    try {
        double result = safeDivide(a, b);
        cout << "Result: " << result << endl;
    } catch (const runtime_error &e) {
        cout << e.what() << endl;  // Friendly error message
    }

    cout << "Program continues after handling exception." << endl;

    return 0;
}
