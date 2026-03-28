#include <iostream>
#include <string>

int main() {
    std::string code;

    while (true) {
        std::cout << "Enter the secret code: ";
        std::getline(std::cin, code);

        if (code == "Archer02") {
            std::cout << "System Unlocked." << std::endl;
            break; 
        } else {
            std::cout << "Wrong code. Try again." << std::endl;
        }
    }

    return 0;
}
