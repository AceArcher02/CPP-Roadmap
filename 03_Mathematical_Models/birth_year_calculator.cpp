#include <iostream>
using namespace std;

int main() {
    int future_year;
    int birth_year = 2015;

    cout << "Enter a year in the future (like 2030): ";
    cin >> future_year;

    int age = future_year - birth_year;
    cout << "In " << future_year << ", you will be " << age << " years old!";

    return 0;
}
