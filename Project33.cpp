#include <iostream>
using namespace std;
int main7() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int temp = n; temp > 0; temp /= 10)
        count++;
    cout << "Number of digits = " << count << endl;
    return 0;
}
