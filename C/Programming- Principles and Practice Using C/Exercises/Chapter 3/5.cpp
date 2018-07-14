//Измените программу из Упражнения 4 так, чтобы она просила пользователя ввести два числа
//с плавающей точкой и сохраняла их в переменную типа double. Сравните результаты работы 
//этих двух программдля некоторых входных данных на ваш выбор. Совпадают ли эти результаты?
//Должны ли они совпадать? чем они отличаются?

#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	double val1 = 0, val2 = 0; // изменил тип данных


	cout << "Введите два числа с плавающей точкой: " << endl;
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
