#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Display all elements
    cout << "All elements in the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // Accessing specific elements
    cout << "\nAccessing specific elements:" << endl;
    cout << "First element: " << numbers[0] << endl;
    cout << "Third element: " << numbers[2] << endl;
    cout << "Last element: " << numbers[4] << endl;

    return 0;
}
