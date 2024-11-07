#include <iostream>
#include <string>
/*
* что такое объект
* что такое класс 
*/

class Human
 // тело класса.можно использовать приметивные типы.
{  
	// модификатор доступа
public:
	// свойства класса
	int age;
	//сколько лет человеку
	string name;
	// имя человека


};

int main()
{
	Human firstHuman;
	//с ним нельзя ничего сделать-это только название.тело.
	firstHuman.age = 30;
	firstHuman.name = "Popova Amina Filippovna";

	std::cout << firstHuman.age << endl;
	std::cout << firstHuman.name << endl;

	return 0;
}
