#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        sum += n % 10; // Get the last digit
        n /= 10;       // Remove the last digit
    }
    cout << "Sum is: " << sum;
    return 0;
}
