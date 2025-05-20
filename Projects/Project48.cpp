#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 3, 1, 2, 3, 4, 2, 1, 3, 2};
    int freq[5] = {0};

    for(int i = 0; i < 10; i++)
        freq[arr[i]]++;

    for(int i = 1; i <= 4; i++)
        cout << "Number " << i << ": " << freq[i] << " times\n";

    return 0;
}
