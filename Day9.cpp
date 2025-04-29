#include <iostream>
using namespace std;

int main() {
    char userChar;

    cout << "Enter any character: ";
    cin >> userChar;

    cout << "Character: " << userChar << "\n";
    cout << "ASCII Code: " << (int)userChar << "\n";

    return 0;
}
