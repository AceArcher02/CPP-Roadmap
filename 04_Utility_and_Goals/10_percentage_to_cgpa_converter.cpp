#include <iostream>
using namespace std;

int main() {
    float percentage, cgpa;
    cout << "Enter your percentage: "; cin >> percentage;
    cgpa = percentage / 9.5;
    cout << "Your estimated CGPA is: " << cgpa << endl;
    return 0;
}
