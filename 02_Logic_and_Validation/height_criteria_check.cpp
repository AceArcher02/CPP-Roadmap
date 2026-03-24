#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter your height in cm: ";
    cin >> height;

    if (height > 150) {
        cout << "You are tall enough for the ride!";
    } else {
        cout << "Sorry, you are too short for this one.";
    }

    return 0;
}
