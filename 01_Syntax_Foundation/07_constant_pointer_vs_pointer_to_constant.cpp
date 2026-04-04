#include <iostream>
int main() {
    int val = 60;
    const int* ptr1 = &val; // Pointer to constant (can't change the value)
    int* const ptr2 = &val; // Constant pointer (can't change the address)
    std::cout << "Pointer Logic Foundation: Set." << std::endl;
    return 0;
}
