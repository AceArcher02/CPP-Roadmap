#include <iostream>
using namespace std;

int main() {
    float p, r, t, si;
    cout << "Principal, Rate, Time: ";
    cin >> p >> r >> t;
    si = (p * r * t) / 100;
    cout << "Simple Interest: " << si << endl;
    return 0;
}
