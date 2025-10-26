#include <iostream>
using namespace std;

int main() {
    int seconds;

    cout << "Enter number of seconds: ";
    cin >> seconds;

    if (seconds >= 86400) {
        cout << "That is " << seconds / 86400 << " day(s)." << endl;
    }
    else if (seconds >= 3600) {
        cout << "That is " << seconds / 3600 << " hour(s)." << endl;
    }
    else if (seconds >= 60) {
        cout << "That is " << seconds / 60 << " minute(s)." << endl;
    }
    else {
        cout << "That is " << seconds << " second(s)." << endl;
    }

    return 0;
}

