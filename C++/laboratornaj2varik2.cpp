#include <iostream>
#include <cmath>
// Необходимо для математических функций
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	double y;
	double x;
	double c;
	double d;
	double a;
	double o;

	int e;

	cout << "Введите х " << endl;
	cin >> x;
	cout << "Введите y" << endl;
	cin >> y;
	cout << "Введите c" << endl;
	cin >> c;
	cout << "Введите d" << endl;
	cin >> d;


	if (x * y > 3) {

		 a = pow(x, 3);
		 o = log10(pow(x * y, c * d)); 
		e = max(a, o); 
	}

	
	 
	 

	else if (x * y >= 0 && x * y <= 3) {
	  
		double a = max(c * x, d * y);
		e = 3 * min(min(x, y), a); 
	}

	
	 else if (x * y <  0) {

		 e = pow(2, c * d) - x;
	}

	cout << "Результат  = " << e << endl;
	return 0;
	
}
