#include <iostream>
using namespace std;

int main() {
    int steps;
    cout << "How many steps did you walk today? ";
    cin >> steps;

    if (steps >= 10000) {
        cout << "Goal Reached! You are a machine.";
    } else {
        cout << "Keep moving! You need " << 10000 - steps << " more steps.";
    }

    return 0;
}
