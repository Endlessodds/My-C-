#include <iostream>
using namespace std;

int main() {
    char again;

    do {
        cout << "Hello, user!" << endl;
        cout << "Do you want to be greeted again? (y/n): ";
        cin >> again;
    } while (again == 'y');

    return 0;
}
