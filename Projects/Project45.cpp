#include <iostream>
using namespace std;

void insertElement(int arr[], int& size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;

    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100], size, element, position;
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position (0-based index): ";
    cin >> position;

    insertElement(arr, size, element, position);

    return 0;
}
