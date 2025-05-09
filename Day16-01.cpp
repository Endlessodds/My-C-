#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask the user for the array size
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare an array of the specified size
    int numbers[size];

    // Get array elements from the user
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Display all elements
    cout << "\nAll elements in the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // Accessing specific elements
    cout << "\nAccessing specific elements:\n";
    if (size > 0) cout << "First element: " << numbers[0] << endl;
    if (size > 2) cout << "Third element: " << numbers[2] << endl;
    if (size > 4) cout << "Last element: " << numbers[size - 1] << endl;

    return 0;
}
