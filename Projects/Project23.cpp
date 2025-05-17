#include <iostream>
using namespace std;

int main() {
    int num, i = 2, isPrime = 1;
    cout << "Enter a number: ";
    cin >> num;

    while (i < num) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime && num > 1)
        cout << num << " is prime.";
    else
        cout << num << " is not prime.";

    return 0;
}
