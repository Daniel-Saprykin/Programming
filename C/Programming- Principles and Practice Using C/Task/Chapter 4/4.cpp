// Измените программу из 3.срр так, чтобы она работала с числами типа double, а не int.

#include <iostream>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	double val1 = 0, val2 = 0;

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
