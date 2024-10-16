#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	double y; 
	double a;
	double b;

	cout << "Введите x = ";
	cin >> x;

	cout << "Введите y = ";
	cin >> y;

	cout << "Введите b = ";
	cin >> b;

	cout << "Введите a = ";
	cin >> a;


	if (x * y > 0)
	{
		double z = 1 - exp(x * y + a * b);
		cout << "result: " << z;
	}
	if (x * y == 0)
	{
		double ElMin = a * x; //предположение
		if (ElMin > y)
		{
			ElMin = y;
		}
		double z = b - ElMin;
		cout << "result: " << z;
	}
	if (x * y < 0)
	{
		double ElMax = pow(x, 3); //предположение
		if (ElMax < exp(y))
		{
				ElMax = exp(y);
		}
		if (ElMax < sqrt(log(pow(y, 2))))
		{
				ElMax = sqrt(log(pow(y, 2)));
		}
		double z = ElMax;
		cout << "result: " << z;
	}
}
