#include <iostream>
using namespace std;

int main() {
    int speed;
    cout << "Enter vehicle speed (km/h): ";
    cin >> speed;

    if (speed <= 60) {
        cout << "Safe driving." << endl;
    } else if (speed > 60 && speed <= 80) {
        cout << "Warning: Slow down!" << endl;
    } else {
        cout << "Over-speeding! Fine may be issued." << endl;
    }

    return 0;
}
