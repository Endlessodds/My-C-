#include <iostream>
using namespace std;

int main() {
    int age;
    bool isCitizen;

    // Taking user input
    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a citizen? (1 for Yes, 0 for No): ";
    cin >> isCitizen;

    // Using logical operators directly
    cout << "Eligibility to vote: " << (age >= 18 && isCitizen) << endl;

    return 0;
}
