#include <iostream>
int main() {
    int x = 0;
    if (x != 0 && (10 / x > 1)) { // The 10/0 won't crash because x!=0 is false
        std::cout << "Access Granted";
    } else {
        std::cout << "Safe: Logic Short-Circuited.";
    }
    return 0;
}
