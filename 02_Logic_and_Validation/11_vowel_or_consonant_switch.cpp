#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;
    switch(tolower(c)) { // Handles both 'A' and 'a'
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "Vowel"; break;
        default: cout << "Consonant";
    }
    return 0;
}
