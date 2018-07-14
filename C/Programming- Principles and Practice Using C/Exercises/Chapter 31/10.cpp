// Напишите программу, принимающую на входе символ операции с двумя операндами и выводящую на экран результат вычислени
// Считайте символ операции, в строку с именем operation и, используя инструкцию if, выясните какую операцию хочет 
// выполнить пользователь например if (operation == "+"). Считывайте операнды в переменные типа double. Выполните
// операции +,-,*,/,plus,minus,mul и div, имеющие очевидный смысл.


#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	string operation = " ";
	double val1 = 0, val2 = 0;

	cout << "Введите два цисла: " << endl;
	cin >> val1 >> val2;

	cout << "Введите оператор: " << endl;
	cin >> operation;

	if (operation == "+" || operation == "plus")
	{
		cout << val1 + val2 << endl;
	}
	else if (operation == "-" || operation == "minus")
	{
		cout << val1 - val2 << endl;
	}
	else if (operation == "*" || operation == "mul")
	{
		cout << val1 * val2 << endl;
	}
	else if (operation == "/" || operation == "div")
	{
		if (val1 == 0 || val2 == 0)
		{
			cout << "Division by zero!" << endl;
		}
		else
		{
			cout << val1 / val2 << endl;
		}
	
	}



	system("pause");
	return 0;
}
