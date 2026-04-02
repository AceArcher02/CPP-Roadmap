#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, s, area;
    cout << "Enter sides a, b, c: "; cin >> a >> b >> c;

    s = (a + b + c) / 2; // Semi-perimeter
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area of Triangle: " << area << endl;
    return 0;
}
