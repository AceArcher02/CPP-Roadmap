#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y, z, magnitude;
    cout << "Enter Vector components (x y z): ";
    cin >> x >> y >> z;
    magnitude = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    cout << "The Magnitude of the Vector is: " << magnitude << endl;
    return 0;
}
