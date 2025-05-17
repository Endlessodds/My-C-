#include <iostream>
using namespace std;

int main() {
    string pass;
    int tries = 0;

    do {
        cout << "Enter password: ";
        cin >> pass;
        tries++;

        if (pass == "admin") {
            cout << "Welcome!\n";
            break;
        } else {
            cout << "Incorrect password.\n";
        }
    } while (tries < 3);

    if (tries == 3) {
        cout << "Too many attempts. Access denied.";
    }

    return 0;
}
