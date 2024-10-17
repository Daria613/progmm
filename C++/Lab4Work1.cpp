#include <iostream>
using namespace std;
double Opereic(double, double);
int main() 
{
	setlocale(LC_ALL, "Russian");
	double d1;
	double d2;
	double d3;
	double S1;
	double S2;
	double S3;
	double r;
	cout << "Введите r:" << endl;
	cin >> r;
	S1 = Opereic(10, r);
	cout << S1 << endl;
	S2 = Opereic(50, r);
	cout << S2 << endl;
	S3 = Opereic(100, r);
	cout << S3 << endl;
	double n;
	cout << "Введите n:" << endl;
	cin >> n;
	double S4;
	S4 = Opereic(n, r);
	cout << S4 << endl;
}
double Opereic(double n, double r)
{
	double a = 2 * r * sin(180 / n);
	double p = n * a;
	return  p;
}
