#include <iostream>
using namespace std;

int main() {
    const double price = 99.0;
    int quantity;
    double discount, total;

    cout << "Enter number of units sold: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Number of units must be greater than 0.";
    }
    else if (quantity >= 10 && quantity <= 19)
        discount = 0.20;
    else if (quantity >= 20 && quantity <= 49)
        discount = 0.30;
    else if (quantity >= 50 && quantity <= 99)
        discount = 0.40;
    else if (quantity >= 100)
        discount = 0.50;
    else
        discount = 0.0;

    total = quantity * price * (1 - discount);

    cout << "Total cost: $" << total;

    return 0;
}
