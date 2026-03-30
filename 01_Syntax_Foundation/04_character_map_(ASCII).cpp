#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    // (int) converts the character to its numeric ASCII code
    cout << "The ASCII value of " << ch << " is " << (int)ch << endl;
    return 0;
}
