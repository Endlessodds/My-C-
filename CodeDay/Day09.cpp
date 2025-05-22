#include <iostream>
using namespace std;

int main() {
    char userChar;

    cout << "Enter any character: ";
    cin >> userChar;

    cout << "Character: " << userChar << "\n";
    cout << "ASCII Code: " << (int)userChar << "\n";
//Next project: using ASCII code, develop encryption and decryption
// that accepts inputs for encryption and outputs a decryption.
    return 0;
}
