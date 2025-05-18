#include <iostream>
using namespace std;

int main() {
    int weight;
    int height;
    cout<<"Enter weight";
    cin>>weight;
    cout<<"Enter height";
    cin>>height;
    double bmi = weight / (height * height);

    cout << "Weight: " << weight << " kg\n";
    cout << "Height: " << height << " m\n";
    cout << "BMI: " << bmi << "\n";

    return 0;
}
