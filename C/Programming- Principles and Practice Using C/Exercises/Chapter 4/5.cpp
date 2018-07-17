// Напишите программу, выполняюrцую самые простые функции калькулятора. Ваш калькулятор должен выполнять четыре основные
// арифметические операции - сложение, вычитание, умножение и деление. Программа должна предлагать пользователю ввести три 
// аргумента: два значения типа douЫe и символ операции. Если входные аргументы равны 35 . 6, 24 . 1 и ' + ' , то 
// программа должна вывести на экран строку "Сумма 35.6 и 24.1 равна 59.7".


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int val1 = 0, val2 = 0;
	char oper = ' ';

	cin >> val1 >> oper >> val2;

	switch (oper)
	{
	case'+':
		cout << "Сумма " << val1 << " и " << val2 << " Равна " << val1 + val2 << endl;
		break;
	case'-':
		cout << "Разность " << val1 << " и " << val2 << " Равна " << val1 - val2 << endl;
		break;
	case'*':
		cout << "Произведением " << val1 << " и " << val2 << " Равна " << val1 * val2 << endl;
		break;
	case'/':
		cout << "Частное " << val1 << " и " << val2 << " Равна " << val1 / val2 << endl;
		break;
	default:
		cout << "введена неизвестная операция: " << oper << endl;
		break;
	}
	system("PAUSE");
	return 0;
}
