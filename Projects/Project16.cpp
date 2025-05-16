#include <iostream>
#include <string>
using namespace std;

int main() {
    string color;
    cout << "Enter traffic light color (red, yellow, green): ";
    cin >> color;

    if (color == "red" || color == "Red") {
        cout << "STOP" << endl;
    } else if (color == "yellow" || color == "Yellow") {
        cout << "WAIT" << endl;
    } else if (color == "green" || color == "Green") {
        cout << "GO" << endl;
    } else {
        cout << "Invalid color input." << endl;
    }

    return 0;
}
