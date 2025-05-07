#include <iostream>
using namespace std;
int main2() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
        sum += i;
    cout << "Sum = " << sum << endl;
    return 0;
