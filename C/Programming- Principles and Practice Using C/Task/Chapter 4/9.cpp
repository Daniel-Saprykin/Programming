// Отслеживайте сумму введенных значений (помимо наименьшего инаибольшего) и их количество. 
// Когда цикл завершится, выведите на экран наименьшее введенное значение, наибольшее введенное 
// значение, количество введенных значений и их сумму. Обратите внимание на то, что. накапливая сумму.
// вы должны выбрать для нее единицу измерения (используйте метры).

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
	int value = 0, sum = 0;

	while (cin >> val1 >> ed)
	{
		
		double val2 = 0;
		if (ed == "cm")
		{
			val2 = val1 / 100;
			cout << val2 << "м" << endl;
			cout << endl;
		}
		else if (ed == "m")
		{
			val2 = val1 * 100;
			cout << val2 << "см" << endl;
			cout << endl;
		}
		else if (ed == "in")
		{
			val2 = val1 * 2.54;
			cout << val2 << "см" << endl;
			cout << endl;
		}
		else if (ed == "ft")
		{
			val2 = val1 * 12;
			cout << val2 << "in" << endl;
			cout << endl;
		}
		else
		{
			cout << "value rejected" << endl;
		}

		if (min > val1)
		{
			min = val1;
		}
		if (max < val1)
		{
			max = val1;
		}

		value++;
		sum += val1;
		
	}
	
	cout << "Наибольшее среди введенных: " << max << endl;
	cout << "Наименьшее среди введенных: " << min << endl;
	cout << "Количество введенных значений: " << value << endl;
	cout << "Сумма всех введенных значений : " << sum  << "  m" << endl;
	system("pause");
	return 0;
