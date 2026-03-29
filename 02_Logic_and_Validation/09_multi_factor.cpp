#include <iostream>
using namespace std;

int main() {
    bool hasPassword = true;
    bool hasOTP = false;
    if (hasPassword && hasOTP) {
        cout << "Vault Opened";
    } else {
        cout << "Access Denied";
    }
    return 0;
}
