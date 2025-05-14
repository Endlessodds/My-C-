#include <iostream>
using namespace std;

int main() {
int day = 3;
switch (day) {
    case 1:
        std::cout << "Monday\n";
      // code to be executed if variable == value which is 1
        break;
    case 2:
        std::cout << "Tuesday\n";
        break;
    case 3:
        std::cout << "Wednesday\n";
        break;
    case 4:
        std::cout << "Thursday\n";
        break;
    case 5:
        std::cout << "Friday\n";
        break;
    case 6:
        std::cout << "Saturday\n";
        break;
    case 7:
        std::cout << "Sunday\n";
        break;
    default:
        std::cout << "Invalid day\n";
   // code to be executed if variable doesn't match any case
}


return 0;
}
