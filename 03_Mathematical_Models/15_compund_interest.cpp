#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time;
    cout << "Enter Principal, Rate (%), and Time (years): ";
    cin >> principal >> rate >> time;

    double amount = principal * pow((1 + rate / 100), time);
    cout << "Future Value: " << amount << endl;
    cout << "Interest Earned: " << amount - principal << endl;
    return 0;
}
