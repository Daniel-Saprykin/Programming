#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	int val1 = 0, val2 = 0;


	cout << "Введите два целочисленных значения: " << endl;
	cin >> val1 >> val2;

	if (val1 > val2)
	{
		cout << "Значение " << val1 << " больше " << val2 << endl;
		cout << "Сумма = " << val1 + val2 << endl;
		cout << "Разность = " << val1 - val2 << endl;
		cout << "Разность = " << val1 * val2 << endl;
		if (val1 == 0 || val2 == 0)
		{
			cout << "Division by zero!! " << endl;
		}
		else
		{
			cout << "Разность = " << val2 / val1 << endl;
		}
	}
	else
	{
		cout << "Значение " << val2 << " больше " << val1 << endl;
		cout << "Сумма = " << val1 + val2 << endl;
		cout << "Разность = " << val2 - val1 << endl;
		cout << "Разность = " << val1 * val2 << endl;
		if (val1 == 0 || val2 == 0)
		{
			cout << "Division by zero!! " << endl;
		}
		else
		{
			cout << "Разность = " << val2 / val1 << endl;
		}

	}

	
	

	system("pause");
	return 0;
}
