#include <iostream>


using namespace std;


double foo(double a, double d, double c)
{
	double ac = (d*d) - 4 * a * c;
	double x1, x2;

	if (d < 0)
	{
		cout << "Корней нет" << endl;
	}
	else if (d == 0)
	{
		cout << endl;
		x1 = (2 + sqrt(16)) / 2;
		cout << "x1 = " << x1 << endl;
		return x1;
	}
	else
	{
		cout << endl;
		x1 = (2 + sqrt(16)) / 2;
		x2 = (2 - sqrt(16)) / 2;
		cout << "x1 = " << x1 << " || " << " x2 = " << x2 << endl;
		return 1;
	}

}

int main()
{
	setlocale(LC_ALL, "rus");

	double a = 5.0;
	double b = 20.0;
	double c = 7.0;

	double sum = foo(a, b, c);
	cout << sum << endl;


	system("pause");
	return 0;
}
