#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a % b == 0 || b % a == 0) {
        cout << "Yes, one number is a multiple of the other." << endl;
    } else {
        cout << "No, neither is a multiple of the other." << endl;
    }

    return 0;
}
