#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double y;
	cout << "Использование цикла for" << endl;
	cout << "--------------------" << endl << endl;
	// С использованием цикла for
	for (double p = -1; p <= 1; p += 0.1)
	{
		y = 0.1 * pow(2, -p) * exp(p);
		cout << y << endl;
	}
	cout << "Использование цикла While" << endl;
	cout << "--------------------" << endl << endl;
	// С использованием цикла While
	double x = -1;
	while (x <= 1)
	{
		y = 0.1 * pow(2, -x) * exp(x);
		x += 0.1;
		cout << y << endl;
	}
	cout << "Использование цикла do While" << endl;
	cout << "--------------------" << endl << endl;
	// С использованием do While
	x = 0;
	do
	{ 
		y = 0.1 * pow(2, -x) * exp(x);
		x += 0.1;
		cout << y << endl;
	} while (x <= 1);
	
}

