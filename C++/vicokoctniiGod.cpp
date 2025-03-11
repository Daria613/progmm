#include <iostream>
#include <limits>
using namespace std;

int inputPositiveNumber() {
    int number;
    while (true) {
        cin >> number;
        if (cin.fail() || number < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка: Введите положительное число!" << endl;
        }
        else {
            return number; 
        }// проверка на отрицательность
    }
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int year;

    cout << "Введите год: ";
    year = inputPositiveNumber(); 

    // вис. или не
    if (isLeapYear(year)) {
        cout << year << " является високосным годом." << endl;
    }
    else {
        cout << year << " не является високосным годом." << endl;
    }

    return 0;
}
