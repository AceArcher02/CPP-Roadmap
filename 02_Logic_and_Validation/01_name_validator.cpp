//Who is entering the system?
#include <iostream>
#include <string> // This is the 'dictionary' for words
using namespace std;

int main() {
    string name;

    cout << "Who is entering the system? ";
    cin >> name; // Computer takes your name and puts it in the 'name' jar

    cout << "Welcome, Agent " << name << ". Initializing firewall..." << endl;

    return 0;
}
