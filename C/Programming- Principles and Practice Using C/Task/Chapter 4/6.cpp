// Теперь измените тело цикла так. чтобы он считывал только по одному числу типа douЬle в каждой итерации. 
// Определите две переменные, чтобы отслеживать наименьшее и наибольшее среди всех ранее введенных значений.
// В каждой итерации цикла выводите только что введенное число. Если оно окажется наименьшим среди всех 
// введенных, выводите на экран строку "Наименьшее среди введенных". Если же оно окажется наибольшим среди 
// введенных, выводите на экран строку "Наибольшее среди введенных".

#include <iostream>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	double val1 = 0;
	double max = -10000, min = 10000;

	while (cin >> val1)
	{
		if (max < val1)
		{
			max = val1;
			cout << "Наибольшее среди введенных: " << max << endl;
		}
		else if (min > val1)
		{
			min = val1;
			cout << "наименьшее среди введенных: " << min << endl;
		}
	}

	system("pause");
	return 0;
}
