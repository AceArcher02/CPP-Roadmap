#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << " is the bigger boss.";
    } else {
        cout << b << " is the bigger boss.";
    }

    return 0;
}
