#include <iostream>
#include <iomanip> // Needed for setprecision
using namespace std;

int main() {
    int a = 10, b = 3;
    cout << "Integer division: " << a / b << endl;
    cout << "Float division: " << (float)a / b << endl;
    cout << "Double with precision: " << fixed << setprecision(10) << (double)a / b << endl;
    return 0;
}
