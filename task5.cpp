#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num1 = rand() % 500;
    int num2 = rand() % 500;
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int num1, num2, answer, correct;

    num1 = rand() % 10;
    num2 = rand() % 10;


    cout << "Add the following numbers:" << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;


    cout << "Enter your answer: ";
    cin >> answer;


    correct = num1 + num2;


    if (answer == correct) {
        cout << "Correct! Well done!" << endl;
    } else {
        cout << "Wrong answer. The correct answer is " << correct << "." << endl;
    }

    return 0;
}
