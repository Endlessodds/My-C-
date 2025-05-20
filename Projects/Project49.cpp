#include <iostream>
using namespace std;

int main() {
    int arr[5] = {11, 25, 39, 45, 60};
    int key;
    bool found = false;

    cout << "Enter number to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    cout << (found ? "Found!" : "Not Found!") << endl;
    return 0;
}
