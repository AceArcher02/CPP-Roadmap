#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter Password: ";
    cin >> password;

    if (password == "admin123") {
        cout << "Logged in successfully!";
    } else {
        cout << "Wrong password. System Locked.";
    }

    return 0;
}
