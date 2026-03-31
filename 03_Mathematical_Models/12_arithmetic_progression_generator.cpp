#include <iostream>
using namespace std;

int main() {
    int a, d, n, term;
    cout << "Enter First Term (a), Difference (d), and Number of Terms (n): ";
    cin >> a >> d >> n;
    cout << "Your AP Series: ";
    for(int i = 0; i < n; i++) {
        term = a + (i * d);
        cout << term << " ";
    }
    return 0;
}
