#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "What is your age? ";
    cin >> age;

    if (age < 16) {
        cout << "Too young to drive." << endl;
    } else if (age == 16) {
        cout << "Better clear the road!" << endl;
    } else { // age > 16
        cout << "You are getting pretty old." << endl;
    }

    return 0;
}
