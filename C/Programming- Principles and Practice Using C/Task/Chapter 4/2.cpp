// Измените программу из 1.cpp так чтобы она выводила на экран строку "Наименьшее значение равно: " 
// с последующим наименьшим значением, а затем - строку "Наибольшее значение равно: " с последующим 
// наибольшим значением.

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
		else
		{
			cout << "Наименьшее значение равно: " << val1 << endl;
			cout << "Наибольшее значение равно: " << val2 << endl;
			cout << endl;
		}

	}

	system("pause");
	return 0;
}
