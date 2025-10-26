#include <iostream>
using namespace std;

int main() {
    double weight, distance, cost;

    cout << "Enter weight of package (in kg): ";
    cin >> weight;

    cout << "Enter distance to ship (in miles): ";
    cin >> distance;

   
    if (weight <= 0 || distance <= 0) {
        cout << "Invalid input! Weight and distance must be positive numbers." << endl;
        return 0;
    }
    
    if (weight <= 2)
        cost = 1.10;
    else if (weight <= 6)
        cost = 2.20;
    else if (weight <= 10)
        cost = 3.70;
    else
        cost = 4.80;

    
    double total = (distance / 500) * cost;

    cout << "Shipping cost: $" << total << endl;

    return 0;
}

