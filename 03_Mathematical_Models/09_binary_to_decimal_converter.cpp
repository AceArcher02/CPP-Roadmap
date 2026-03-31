#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    int decimal = 0, i = 0, rem;
    cout << "Enter binary: ";
    cin >> n;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    cout << "Decimal: " << decimal << endl;
    return 0;
}
