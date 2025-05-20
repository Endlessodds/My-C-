#include <iostream>
using namespace std;

int main() {
    int nums[5] = {12, 45, 23, 67, 34};
    int max = nums[0];

    for(int i = 1; i < 5; i++) {
        if(nums[i] > max)
            max = nums[i];
    }

    cout << "Maximum value: " << max << endl;
    return 0;
}
