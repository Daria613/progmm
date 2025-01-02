#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

void clearBuf() {
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
	setlocale(LC_ALL, "Russian");
	double x;
	double n;
	double x1;
	double n1;
	double x2;
	double n2;
	double x3;
	double n3;



	int k;
	for (;;) 
	{
	do {
		cout << ">";
		cout << "1.1-что вас интересует?" << std::endl;
		cout << "1- умножение" << std::endl;
		cout << "2- деление" << std::endl;
		cout << "3- разность" << std::endl;
		cout << "4- сумма" << std::endl;
		cout << "5- exit" << endl;
		cout << ">";
		while (!(cin >> k)) clearBuf();
		clearBuf();
		switch (k) {

		case 1: cout << endl << "1- умножение" << endl;


			do
			{
				std::cout << "Введите x длина отрезка :" << endl;
				std::cin >> x;

				std::cout << "Введите n для умножения:" << endl;
				std::cin >> n;

				double s = x * n;
				std::cout << "ответ вашего умножения:" << endl;
				std::cout << endl << s << endl;
		       

			} while (x != 0); 

		case 5: cout << endl << "1.1" << endl;
			cout << ">";
			cout << "1.1-что вас интересует?" << std::endl;
			cout << "1- умножение" << std::endl;
			cout << "2- деление" << std::endl;
			cout << "3- разность" << std::endl;
			cout << "4- сумма" << std::endl;
			cout << "5- exit" << endl;
			cout << ">";

		case 2: cout << endl << "2- деление" << endl;


			do
			{

				std::cout << "Введите x1 длина отрезка :" << endl;
				std::cin >> x1;

				std::cout << "Введите n1 для деления:" << endl;
				std::cin >> n1;

				double c = x1 / n1;

				std::cout << "ответ вашего деления:" << endl;
				std::cout << endl << c << endl;
			} while (x1 != 0);


		case 7: cout << endl << "1.1" << endl;
			cout << ">";
			cout << "1.1-что вас интересует?" << std::endl;
			cout << "1- умножение" << std::endl;
			cout << "2- деление" << std::endl;
			cout << "3- разность" << std::endl;
			cout << "4- сумма" << std::endl;
			cout << "5- exit" << endl;
			cout << ">";


		case 3: cout << endl << "3- разность" << endl;


			do
			{
				std::cout << "Введите x2 длина отрезка :" << endl;
				std::cin >> x2;

				std::cout << "Введите n2 для вычитания:" << endl;
				std::cin >> n2;

				double c1 = x2 - n2;
				std::cout << "значение разности:" << endl;
				std::cout << endl << c1 << endl;
			} while (x2 != 0);

		case 8: cout << endl << "1.1" << endl;
			cout << ">";
			cout << "1.1-что вас интересует?" << std::endl;
			cout << "1- умножение" << std::endl;
			cout << "2- деление" << std::endl;
			cout << "3- разность" << std::endl;
			cout << "4- сумма" << std::endl;
			cout << "5- exit" << endl;
			cout << ">";

		case 4: cout << endl << "4- сумма" << endl;


			do
			{

				std::cout << "Введите x3 длина отрезка :" << endl;
				std::cin >> x3;

				std::cout << "Введите n3 для сложения:" << endl;
				std::cin >> n3;

				double c2 = x3 + n3;
				std::cout << "сумма чисел:" << endl;
				std::cout << endl << c2 << endl;
			} while (x3 != 0); break;

		case 9: cout << endl << "1.1" << endl;
			cout << ">";
			cout << "1.1-что вас интересует?" << std::endl;
			cout << "1- умножение" << std::endl;
			cout << "2- деление" << std::endl;
			cout << "3- разность" << std::endl;
			cout << "4- сумма" << std::endl;
			cout << "5- exit" << endl;
			cout << ">";

		case 6: exit(5); break;
		default: continue;
		}
	} while (1);
	}
}
