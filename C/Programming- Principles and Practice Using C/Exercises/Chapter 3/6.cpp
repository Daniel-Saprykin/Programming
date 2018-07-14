//Напишите программу, предлагающую пользователю ввести три целых числа, 
//а затем выводит их в порядке возрастания разделяя запятыми, если два цисла
//совпадают они должны идти одно за другим.

#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	int val1 = 0, val2 = 0, val3 = 0;

	cin >> val1 >> val2 >> val3;

	if (val1 >= val2 && val1 >= val3)
	{
		cout << val1 << ", ";
		if (val2 > val3)
		{
			cout << val2 << ", " << val3 << endl;
		}
		else
		{
			cout << val3 << ", " << val2 << endl;
		}

	}
	else if (val2 >= val1 && val2 >= val3)
	{
		cout << val2 << ", ";
		if (val1 > val3)
		{
			cout << val1 << ", " << val3 << endl;
		}
		else
		{
			cout << val3 << ", " << val1 << endl;
		}

	}
	else if (val3 >= val1 && val3 >= val2)
	{
		cout << val3 << ", ";
		if (val1 > val2)
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
