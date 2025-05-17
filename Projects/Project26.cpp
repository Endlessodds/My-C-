#include <iostream>
using namespace std;

int main() {
    string password;

    do {
        cout << "Enter the password: ";
        cin >> password;
    } while (password != "open123");

    cout << "Access granted!";
    return 0;
}
