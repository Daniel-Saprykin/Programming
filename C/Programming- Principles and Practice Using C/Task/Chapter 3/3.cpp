#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");
	string first_name, frien_name;

	cout << "Введите имя адресата: ";
	cin >> first_name;
	cout << "Введите имя приятеля: ";
	cin >> frien_name;
	cout << "Дорогой, " << first_name << endl;

	cout << "Как дела? у меня все хорошо. Я скучаю по тебе." << endl;
	cout << "Давно ли ты встречал " << frien_name << "?"<< endl;


	system("pause");
	return 0;
}
