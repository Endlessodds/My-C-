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
    if (b == 0) {
        // Handle division by zero
        cout << "Error: Division by zero." << endl;
        return 1;
    }
    return a / b;
}

void menu() {
    cout << "Welcome ======\n";
    cout << "Choose one:\n";
    cout << "  + : Addition\n";
    cout << "  - : Subtraction\n";
    cout << "  * : Multiplication\n";
    cout << "  / : Division\n";
    cout << "  a : All operations\n";
}

int main() {
    double num1, num2;
    char operation;

    menu(); // Show menu

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Input operation choice
    cout << "Enter operation (+, -, *, /, a): ";
    cin >> operation;
    // Matching operation with signs to call Function
    if (operation == '+') {
        cout << "Result: " << add(num1, num2) << endl;
    }
    else if (operation == '-') {
        cout << "Result: " << subtract(num1, num2) << endl;
    }
    else if (operation == '*') {
        cout << "Result: " << multiply(num1, num2) << endl;
    }
    else if (operation == '/') {
        cout << "Result: " << divide(num1, num2) << endl;
    }
    else if (operation == 'a') {
      // outputs all operations
        cout << "Sum: " << add(num1, num2) << endl;
        cout << "Difference: " << subtract(num1, num2) << endl;
        cout << "Product: " << multiply(num1, num2) << endl;
        cout << "Quotient: " << divide(num1, num2) << endl;
    }
    else {
      // handles error correctly
        cout << "Invalid operation entered." << endl;
        return 1;
    }

    return 0;
}
