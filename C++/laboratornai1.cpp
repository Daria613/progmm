#include <iostream>
#include <cmath>
// Необходимо для математических функций
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	double y;
	double x;
	double t;

	cout << "Введите x:" << endl;
	cin >> x;
	cout << "Введите y:" << endl;
	cin >> y;
	const double PI = 3.14;

	t = ( cos(PI / 7) *  pow( sin(x - 8 * y), 2)) / (2.7 * (x - PI));

	
	cout << "Результат t = " << t << endl;
	return 0;
	// Добавьте возврат значения
}
