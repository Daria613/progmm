# include <iostream>
# include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double x;
    double y;
    double b;
    double a;
    double z;
    cout << "Введите x:" << endl;
    cin >> x;
    cout << "Введите y:" << endl;
    cin >> y;
    cout << "Введите b:" << endl;
    cin >> b;
    cout << "Введите a:" << endl;
    cin >> a;
    if (x * y > 0) {

        z = pow(1, x * y + a * b);

    }
    else if (x * y == 0) {
        // Предположение

        double minEL = a * x;
        if (minEL > y) {
            minEL = y;
        }

        z = minEL;
    }  if (x * y > 0) {

        //Предположение
        double maxEL = pow(y, 2);
        if (maxEL > pow(x, 3)) {
            if (maxEL > exp(y))
            {
                maxEL = exp(y);
            }
        }

        z = maxEL;
    }

    cout << endl << z << endl;
}