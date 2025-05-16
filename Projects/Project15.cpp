#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu:\n1. Pizza\n2. Burger\n3. Fries\n4. Soda\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Pizza" << endl;
            break;
        case 2:
            cout << "You selected Burger" << endl;
            break;
        case 3:
            cout << "You selected Fries" << endl;
            break;
        case 4:
            cout << "You selected Soda" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
