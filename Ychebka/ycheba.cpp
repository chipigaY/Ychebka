#include <iostream>
#include <cmath>

using namespace std;
// 1
   
bool isLeapYear(int year) {
    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return (year % 400 == 0);
        }
        else {
            return true; // ��� ������� �� 4, �� �� �� 100
        }
    }
    else {
        return false; // ��� �� ������� �� 4
    }
}

// 2
double calculateY(double x) {
    double a = 0.361; 
    double y;

    if (x < -2.5) {
        y = a * pow(sin(2 * x + 1), 2); // a * sin^2(2x + 1)
    }
    else if (x >= -2.5 && x < 4) {
        y = x * sin(x * a); // x * sin(x * a)
    }
    else {
        y = exp(x); // e^x
    }

    return y;
}

int main() {
    // ����� 1

    int year;
    setlocale(LC_ALL, "Russian");
    cout << "������� ���: ";
    cin >> year;
    if (cin.fail()) {
        cout << "������, ������� �����." << endl;
    }

    if (isLeapYear(year)) {
        cout << year << " ��� �������� ����������." << endl;
    }
    else {
        cout << year << " ��� �� �������� ����������." << endl;
    }
    cout << endl;
    // ����� 2

    double x;
    cout << "������� �������� x: ";
    cin >> x;
    if (cin.fail()) {
        cout << "������, ������� �����." << endl;
    }

    double y = calculateY(x);

    cout << "�������� y: " << y << endl;

    return 0;
}
