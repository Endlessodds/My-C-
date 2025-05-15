#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13) {
        cout << "You are a child.\n";
    } else if (age >= 13 && age < 18) {
        cout << "You are a teenager.\n";
    } else if (age >= 18 && age < 65) {
        cout << "You are an adult.\n";
    } else {
        cout << "You are a senior.\n";
    }

    return 0;
}
