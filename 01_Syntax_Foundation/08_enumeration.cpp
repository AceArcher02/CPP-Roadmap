#include <iostream>
enum SecurityLevel { LOW, MEDIUM, HIGH };
int main() {
    SecurityLevel current = HIGH;
    std::cout << "Current Access Level: " << current << std::endl; // Prints 2
    return 0;
}
