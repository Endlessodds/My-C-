#include <iostream>
using namespace std;
int main9() {
    int size;
    cout << "Enter size of square: ";
    cin >> size;
    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= size; ++j)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
