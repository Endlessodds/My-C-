#include <iostream>
using namespace std;

int main() {
    int arr[3] = {5, 10, 15};
    int* ptr = arr; // Points to first element

    for (int i = 0; i < 3; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}
