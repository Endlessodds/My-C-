#include <iostream>
using namespace std;

int main() {
    int celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    int fahrenheit = (celsius * 9 / 5) + 32;
    int kelvin = celsius + 273.15;

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;

    return 0;
}
