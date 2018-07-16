// Если введена неправильная единица измерения, например yard,
// meter, km или gallons, то такое значение следует отклонить.

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
		
	}

	cout << "Наибольшее среди введенных: " << max << endl;
	cout << "наименьшее среди введенных: " << min << endl;
	system("pause");
	return 0;
}
