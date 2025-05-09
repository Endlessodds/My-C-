#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int key) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found in the array." << endl;
    }
}

int main() {
    int arr[100], size, key;
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;

    linearSearch(arr, size, key);

    return 0;
}
