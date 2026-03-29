#include <iostream>
using namespace std;

int main() {
    double mass, acceleration;
    cout << "Enter mass (kg) and acceleration (m/s^2): ";
    cin >> mass >> acceleration;
    cout << "Force (Newton) = " << mass * acceleration << endl;
    return 0;
}
