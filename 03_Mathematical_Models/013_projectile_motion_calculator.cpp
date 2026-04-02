#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double u, angle, r;
    const double g = 9.8;
    const double PI = 3.14159;

    cout << "Enter initial velocity (m/s): "; cin >> u;
    cout << "Enter angle (degrees): "; cin >> angle;

    // Convert degrees to radians for sin()
    double rad = angle * (PI / 180);
    r = (u * u * sin(2 * rad)) / g;

    cout << "Horizontal Range: " << r << " meters" << endl;
    return 0;
}
