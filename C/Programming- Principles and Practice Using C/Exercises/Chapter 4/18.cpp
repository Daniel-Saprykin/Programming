// Напишите программу для решения квадратных уравнений

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 0, b = 0, c = 0, d = 0;
	int x1 = 0, x2 = 0;

	cout << "Введите значения a, b, c, " << endl;
	cout << "ax^2 + bx + cx = 0 " << endl;

	cin >> a >> b >> c;

	d = (b*b) - 4 * a*c;

	if (d < 0)
	{
		cout << "Корней нет" << endl;
	}
	else if (d == 0)
	{
		cout << endl;
		x1 = (2 + sqrt(16)) / 2;
		cout << "x1 = " << x1 << endl;
	}
	else
	{
		cout << endl;
		x1 = (2 + sqrt(16)) / 2;
		x2 = (2 - sqrt(16)) / 2;
		cout << "x1 = " << x1 << " || "<< " x2 = " << x2 << endl;
	}


	system("PAUSE");
	return 0;
}
