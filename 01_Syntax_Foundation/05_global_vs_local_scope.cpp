#include <iostream>
using namespace std;

int x = 10; // Global variable

int main() {
    int x = 20; // Local variable
    cout << "Local x: " << x << endl;
    // :: is the Scope Resolution Operator to access the global x
    cout << "Global x: " << ::x << endl;
    return 0;
}
