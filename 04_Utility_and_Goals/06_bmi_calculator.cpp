#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    cout << "Weight (kg): "; cin >> weight;
    cout << "Height (m): "; cin >> height;
    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;
    if (bmi < 18.5) cout << "Underweight";
    else if (bmi < 24.9) cout << "Healthy";
    else cout << "Overweight";
    return 0;
}
