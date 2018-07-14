// Напишите программу преобрузующую слова "zero", "two" и так далее в цифры 0, 2 и т.д
// Когда пользователь вводит число в виде слова программа должна вывести на экран соответствующую цифру.
// Выполните эту программу для цифр 0,1,2,3,4 если пользователь введет что-нибуть другое, программа
// должна ответить "Я не знаю такого числа!"

#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	string word = " ";
	cin >> word;

	if (word == "zero")
	{
		cout << "0" << endl;
	}
	else if (word == "one")
	{
		cout << "1" << endl;
	}
	else if (word == "two")
	{
		cout << "2" << endl;
	}
	else if (word == "three")
	{
		cout << "3" << endl;
	}
	else if (word == "four")
	{
		cout << "4" << endl;
	}
	else
	{
		cout << "Я не знаю такого числа!" << endl;
	}

	system("pause");
	return 0;
}
