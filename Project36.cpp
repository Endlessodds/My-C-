#include <iostream>
using namespace std;
int main11() {
    int bin, dec = 0, base = 1;
    cout << "Enter a binary number: ";
    cin >> bin;
    for (int n = bin; n > 0; n /= 10) {
        dec += (n % 10) * base;
        base *= 2;
    }
    cout << "Decimal = " << dec << endl;
    return 0;
}
