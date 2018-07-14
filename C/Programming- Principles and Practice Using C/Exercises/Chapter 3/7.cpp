//Выполните упражнение 6 для трех строковых значений. Так если пользователь вводит
//значение Steinbeck, Hemingway, Fitzgerald, то вывод программы должен быть
// Fitzgerald, Hemingway, Steinbeck.

#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	string val1 = " ", val2 = " ", val3 = " ";

	cin >> val1 >> val2 >> val3;

	if (val1 < val2 && val1 < val3)
	{
		cout << val1 << ", ";
		if (val2 < val3)
		{
			cout << val2 << ", " << val3 << endl;
		}
		else
		{
			cout << val3 << ", " << val2 << endl;
		}

	}
	else if (val2 < val1 && val2 < val3)
	{
		cout << val2 << ", ";
		if (val1 < val3)
		{
			cout << val1 << ", " << val3 << endl;
		}
		else
		{
			cout << val3 << ", " << val1 << endl;
		}

	}
	else if (val3 < val1 && val3 < val2)
	{
		cout << val3 << ", ";
		if (val1 < val2)
		{
			cout << val1 << ", " << val2 << endl;
		}
		else
		{
			cout << val2 << ", " << val1 << endl;
		}
	}
	system("pause");
	return 0;
}
