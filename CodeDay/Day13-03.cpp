#include <iostream>
using namespace std;

int main() {

  int age = 20;

  string status = (age >= 18) ? "Adult" : "Minor";
  cout << "You are an " << status << ".\n";

return 0;
}
