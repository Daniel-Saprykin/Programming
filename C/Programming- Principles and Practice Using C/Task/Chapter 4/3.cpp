// Измените программу из 2.cpp так чтобы она выводила строку "Числа равны" но только при равенстве чисел.

#include <iostream>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	int val1 = 0, val2 = 0;

	while (cin >> val1 >> val2)
	{

		if (val1 > val2)
		{
			cout << "Наименьшее значение равно: " << val2 << endl;
			cout << "Наибольшее значение равно: " << val1 << endl;
			cout << endl;
		}
		else if (val1 < val2)
		{
			cout << "Наименьшее значение равно: " << val1 << endl;
			cout << "Наибольшее значение равно: " << val2 << endl;
			cout << endl;
		}
		else
		{
			cout << "Числа равны" << endl;
			cout << endl;
		}

	}

	system("pause");
	return 0;
}
