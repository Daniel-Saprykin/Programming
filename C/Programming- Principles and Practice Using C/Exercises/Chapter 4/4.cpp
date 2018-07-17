// Напишите программу, угадываюrцую число. Пользователь должен задумать число от 1 до 100, 
// а программа должна задавать вопросы, чтобы выяснить, какое число он задумал (например, "Задуманное число
// меньше 50"). Ваша программа должна уметь идентифицировать с помощью не более чем семи попыток.
// Подсказка: используйте операторы < и <=. а также конструкцию if-else.

// ответ скопипастил :( https://toster.ru/q/290252 | teugen @teugen 
// то что написал я по сравнению с этим ... без комментариев

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int min = 1, max = 100;
	cout << "Загадайте число от " << min << " до " << max << ".\n";

	int guess = (min + max) / 2, count = (int)ceil(log2(max - min));
	double temp = log2(max - min);
	for (int i = 0; i < count; ++i)
	{
		cout << "Загаданное число меньше или равно " << guess << "? (y/n)\n";   // fixed

		char ans;
		cin >> ans;
		if (ans == 'y')
		{
			max = guess;
		}
		else
		{
			min = guess + 1;    // fixed
		}
		guess = (min + max) / 2;

		if (max == min)    // fixed
		{
			cout << "Вы загадали число \"" << guess << "\".\n";
			system("PAUSE");
			return 0;
		}
	}

	cout << "Жулик!\n";
	system("PAUSE");
	return 0;
}
