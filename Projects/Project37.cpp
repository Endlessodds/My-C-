#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}

int main() {
    int num = 3;
    cout << "Square of " << num << " is: " << square(num) << endl;
    cout << "Cube of " << num << " is: " << cube(num) << endl;
    return 0;
}
