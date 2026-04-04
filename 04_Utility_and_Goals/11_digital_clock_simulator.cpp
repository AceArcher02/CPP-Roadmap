#include <iostream>
using namespace std;

int main() {
    // This model shows how hours, minutes, and seconds iterate
    for (int h = 0; h < 2; h++) { // Simplified to 2 hours for testing
        for (int m = 0; m < 60; m++) {
            for (int s = 0; s < 60; s++) {
                // In a real app, we would add a 'sleep' function here
                if (s % 10 == 0) cout << h << ":" << m << ":" << s << endl;
            }
        }
    }
    return 0;
}
