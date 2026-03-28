#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Scan\n2. Encrypt\n3. Exit\nChoice: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Scanning..."; break;
        case 2: cout << "Encrypting..."; break;
        default: cout << "Invalid Selection.";
    }
    return 0;
}
