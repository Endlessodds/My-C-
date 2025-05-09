#include <iostream>
using namespace std;

void sumAndAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = (double)sum / size;
    cout << "Sum: " << sum << ", Average: " << average << endl;
}

int main() {
    int arr[100], size;
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sumAndAverage(arr, size);

    return 0;
}
