// An Evolving Project (Changes are based on better C++ concepts)
#include <iostream>
using namespace std;

// Function declarations
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    // Handle division by zero
    if (b == 0) {
        cout << "Error: Division by zero." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Output results using functions
    cout << "The sum is " << add(num1, num2) << endl;
    cout << "The difference is " << subtract(num1, num2) << endl;
    cout << "The product is " << multiply(num1, num2) << endl;
    cout << "The quotient is " << divide(num1, num2) << endl;

    return 0;
}
