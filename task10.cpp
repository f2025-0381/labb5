#include <iostream>
using namespace std;

int main() {
    double calories, fatGrams, caloriesFromFat, percentFat;

    cout << "Enter total calories: ";
    cin >> calories;

    cout << "Enter fat grams: ";
    cin >> fatGrams;


    caloriesFromFat = fatGrams * 9;

    percentFat = (caloriesFromFat / calories) * 100;

    cout << "Calories from fat: " << caloriesFromFat << endl;
    cout << "Percentage of calories from fat: " << percentFat << "%" << endl;

    if (percentFat < 30)
        cout << "This food is low in fat." << endl;
    else
        cout << "This food is not low in fat." << endl;

    return 0;
}
