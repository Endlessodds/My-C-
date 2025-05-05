#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    string correctUsername = "admin";
    string correctPassword = "1234";

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword) {
        cout << "Login Successful" << endl;
    } else {
        cout << "Invalid Credentials" << endl;
    }

    return 0;
}
