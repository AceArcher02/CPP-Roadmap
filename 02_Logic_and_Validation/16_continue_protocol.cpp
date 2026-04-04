#include <iostream>
int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 5) continue; // Skips 5
        std::cout << i << " ";
    }
    return 0;
}
