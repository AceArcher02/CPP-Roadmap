#include <iostream>
using namespace std;

int main() {
    int consumed, burned, net;
    cout << "Calories Consumed today: "; cin >> consumed;
    cout << "Calories Burned (Exercise): "; cin >> burned;
    net = consumed - burned;
    if (net > 2500) cout << "Great! You are in a surplus for mass gain." << endl;
    else cout << "Target: Eat more protein-rich food to hit your 60kg goal!" << endl;
    return 0;
}
