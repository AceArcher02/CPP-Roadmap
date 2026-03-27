#include <iostream>
using namespace std;

int main() {
    float price;
    cout << "Enter item price: ";
    cin >> price;

    float tax = price * 0.05;
    float total = price + tax;

    cout << "Tax: " << tax << endl;
    cout << "Total Bill: " << total << endl;

    return 0;
}
