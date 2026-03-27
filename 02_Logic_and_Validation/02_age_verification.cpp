#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Access Granted. Welcome to the server.";
    } else {
        cout << "Access Denied. Minor detected.";
    }

    return 0;
}
