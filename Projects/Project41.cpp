#include <iostream>
using namespace std;

void findMaxMin(int arr[], int size) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << "Max: " << max << ", Min: " << min << endl;
}

int main() {
    int arr[100], size;
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findMaxMin(arr, size);

    return 0;
}
