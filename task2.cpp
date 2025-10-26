#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2;

    cout << "Enter the first primary color (red, blue, yellow): ";
    cin >> color1;
    cout << "Enter the second primary color (red, blue, yellow): ";
    cin >> color2;

    if ((color1 != "red" && color1 != "blue" && color1 != "yellow") ||
        (color2 != "red" && color2 != "blue" && color2 != "yellow")) {
        cout << "Error: You must enter only primary colors (red, blue, yellow)." << endl;
        }
    else if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
        cout << "Mixing red and blue makes PURPLE." << endl;
    }
    else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
        cout << "Mixing red and yellow makes ORANGE." << endl;
    }
    else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) {
        cout << "Mixing blue and yellow makes GREEN." << endl;
    }
    else {
        cout << "Both colors are the same! It's still " << color1 << "." << endl;
    }

    return 0;
}
