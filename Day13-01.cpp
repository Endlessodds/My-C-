#include <iostream>
using namespace std;

int main() {
    int age = 25;
    if (age < 13) {
        std::cout << "You are a child.\n";
    } else if (age >= 13 && age < 18) {
        std::cout << "You are a teenager.\n";
    } else if (age >= 18 && age < 65) {
        std::cout << "You are an adult.\n";
    } else {
        std::cout << "You are a senior citizen.\n";
    }


return 0;
}
