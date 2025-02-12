#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
int main() {
    cout << "----------------------------------\n";
    cout << "Number one\n";

    double x, y;

    while (true) {
        cout << "Enter the value x: ";
        cin >> x;

        if (cin.good()) {
            break;
        }
        else {
            cout << "Error: Invalid input. Please enter a number.\n" << endl;
            cin.clear();


        }
    }
    while (true) {
        cout << "Enter the value y: ";
        cin >> y;

        if (cin.good()) {
            break;
        }
        else {
            cout << "Error: Invalid input. Please enter a number.\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    double z = pow(y, 3) - 2 * pow(x, 2) + 7 * x * y - 4;

    cout << "Answer number one: " << z << endl;
    cout << "----------------------------------\n";
    cout << "Number two\n";

    while (true) {
        cout << "Enter the value x: ";
        cin >> x;

        if (cin.good()) {
            break;
        }
        else {
            cout << "Error: Invalid input. Please enter a number.\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    if (x <= -3) {
        y = sin(pow(x, 2));
    }
    else if (x > -3 && x < 5) {
        y = 1 + exp(-x);
    }
    else {
        y = log(pow(x, 2)) / (3 + 4 * x);
    }

    cout << "Answer nubmer two, y: " << fixed << setprecision(6) << y << endl;
    cout << "----------------------------------\n";


}
