#include <iostream>
using namespace std;

int main() {
    int ageYears;
    cout << "Enter your age in years: ";
    cin >> ageYears;

    int months = ageYears * 12;
    int weeks = ageYears * 52;
    int days = ageYears * 365;

    cout << "You are approximately:\n";
    cout << months << " months old\n";
    cout << weeks << " weeks old\n";
    cout << days << " days old\n";

    return 0;
}
