#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0, amount;

    cout << "ATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Current Balance: $" << balance << endl;
            break;
        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "New Balance: $" << balance << endl;
            break;
        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn. New Balance: $" << balance << endl;
            } else {
                cout << "Insufficient funds!" << endl;
            }
            break;
        default:
            cout << "Invalid option." << endl;
    }

    return 0;
}
