#include <iostream>
using namespace std;

int main() {
    int studyMinutes;
    cout << "How many minutes did you study? "; cin >> studyMinutes;
    int breakTime = studyMinutes / 4; // 15 min break for every hour
    cout << "You have earned a " << breakTime << " minute break. Stand up and stretch!" << endl;
    return 0;
}
