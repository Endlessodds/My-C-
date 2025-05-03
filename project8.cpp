#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;

    // Taking user input for the sides of the triangle
    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Check if the sides form a valid triangle using relational operators
    bool isValidTriangle = (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);

    // Output the result
    cout << "The triangle is " << (isValidTriangle ? "valid." : "invalid.") << endl;

    return 0;
}
