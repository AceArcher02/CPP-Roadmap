#include <iostream>
using namespace std;

int main() {
    int room_number;
    cout << "Enter your Room Number: ";
    cin >> room_number;

    if (room_number % 2 == 0) {
        cout << "This is an EVEN room. Turn Left.";
    } else {
        cout << "This is an ODD room. Turn Right.";
    }
    
    return 0;
}
