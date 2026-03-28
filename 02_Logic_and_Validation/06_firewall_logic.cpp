#include <iostream>
using namespace std;

int main() {
    int port = 8080;
    if (port == 80 || port == 443) {
        cout << "Standard Web Traffic Allowed." << endl;
    } else {
        cout << "Suspicious Port Detected! Blocking..." << endl;
    }
    return 0;
}
