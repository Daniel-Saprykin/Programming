// Добавьте к каждому введенному числу типа douЫe единицу измерения; иначе говоря, вводите такие значения, 
// как lOcm, 2.2in, 5ft или 3.ЗЗm. Допустимыми являются четыре единицы измерения: cm, m, in, ft. 
// Примите следующие коэффициенты преобразования: lm = lOOcm, lin = 2 . 54cm, lft == 12in. 
// Индикатор единицы измерения вводите в строку. Можно считать ввод 12 m (с пробелом между числом и единицей измерения) 
// эквивалентным вводу 12m (без пробела)

#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	double val1 = 0;
	double max = -100000, min = 100000;
	string ed = " ";

	while (cin >> val1 >> ed)
	{

		double val2 = 0;
		if (ed == "cm")
		{
			val2 = val1 / 100;
			cout << val2 << "м" << endl;
		}
		else if (ed == "m")
		{
			val2 = val1 * 100;
			cout << val2 << "см" << endl;
		}
		else if (ed == "in")
		{
			val2 = val1 * 2.54;
			cout << val2 << "см" << endl;
		}
		else if (ed == "ft")
		{
			val2 = val1 * 12;
			cout << val2 << "in" << endl;
		}

			if (min > val1)
			{
				min = val1;

			}
			if (max < val1)
			{
				max = val1;
			}
		
	}

	cout << "Наибольшее среди введенных: " << max << endl;
	cout << "наименьшее среди введенных: " << min << endl;
	system("pause");
	return 0;
}
