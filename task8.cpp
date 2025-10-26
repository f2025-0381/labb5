include <iostream>
using namespace std;

int main() {
    int age, activities;
    double fee, reduction, total;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter number of activities attended: ";
    cin >> activities;

    if (age < 0 || activities < 0) {
        cout << "Invalid input! Age and activities cannot be negative.";
        return 0;
    }

    if (age <= 6) {
        fee = 5;
        reduction = 0.75;
    }
    else if (age >= 7 && age <= 12) {
        fee = 10;
        reduction = 1.25;
    }
    else if (age >= 13 && age <= 18) {
        fee = 15;
        reduction = 2.0;
    }
    else {
        fee = 25;
        reduction = 2.0;
    }

    total = fee - (activities * reduction);

    if (total < 1)
        total = 1;

    cout << "Membership fee: $" << total;

    return 0;
