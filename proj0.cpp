#include <iostream>
using namespace std;

int main() {
    string name, hobby;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your hobby: ";
    cin >> hobby;

    cout << "\n--- User Bio ---\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Hobby: " << hobby << "\n";

    return 0;
}
