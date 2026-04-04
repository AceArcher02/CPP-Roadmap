#include <iostream>
#include <iomanip> // For setw()
using namespace std;

int main() {
    cout << left << setw(10) << "ID" << setw(15) << "ROLE" << endl;
    cout << "--------------------------" << endl;
    cout << left << setw(10) << "001" << setw(15) << "Admin" << endl;
    cout << left << setw(10) << "002" << setw(15) << "Archer" << endl;
    return 0;
}
