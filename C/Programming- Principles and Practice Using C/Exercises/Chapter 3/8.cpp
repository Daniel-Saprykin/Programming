//Напишите программу, проверяющую четность или нечетность целых чисел. Как всегда, убедитесь, 
//что вывод программы ясен и полн. 

#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	int val = 0;
	
	cin >> val;

	if (val % 2 == 0)
	{
		cout << "Число " << val << " четное" << endl;
	}
	else
	{
		cout << "Число " << val << " нечетное" << endl;
	}

	system("pause");
	return 0;
}
