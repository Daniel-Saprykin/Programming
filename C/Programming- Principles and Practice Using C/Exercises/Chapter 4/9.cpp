// Попробуйте вычислить количество зерен риса, запрошенных изобретателем шахмат в упр. 8. 
// Оказывается. что это число настолько велико. что для его точного представления не подХодит ни тип int, ни
// тип douЫe. Чему равно наибольшее количество клеток. для которых еще можно вычислить точное количество зерен риса 
// (с использованием переменной типа int). Определите наибольшее количество клеток. для которых еще можно вычислить 
// приближенное количество зерен(с использованием переменной типа douЫe)?

#include <iostream>
#include <cmath>



using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int kletki = 0;
	long long sum = 0;
	long long buff = 1;
	int one_thousand = 0;
	int million = 0;
	int billion = 0;

	int int_Max = 0;
	int double_Max = 0;


	cout << "Введите номер клетки: ";
	cin >> kletki;

	for (int i = 1; i <= kletki; i++)
	{
		sum += buff;
		buff = sum;

		// магические числа)
		if (sum >= 1000 && sum < 2000)
		{
			one_thousand = i;
		}

		if (sum >= 1000000 && sum < 2000000)
		{
			million = i;
		}
		if(sum >= 1000000000 && sum < 2000000000)
		{
			billion = i;
		}
		if (sum >= 2147483647 && sum < 4147483647) // максимальный диапазон int
		{
			int_Max = i;
		}
		if (sum >= 9223372036854775808 && sum < 18223372036854775808) // максимальный диапазон double
		{
			double_Max = i;
		}

		cout  << i << "...."<< sum << endl;
	}
	cout << endl;
	cout << "одна тысяча зерен "<< one_thousand << " клетка" << endl;
	cout << "один миллион зерен "<< million << " клетка" << endl;
	cout << "Одни миллиард зерен " << billion  << " клетка"<< endl;
	cout << endl;
	cout << "Максимальное значение int " << int_Max << " клетка" << endl;
	cout << "Максимальное значение int " << double_Max << " клетка" << endl;


	system("PAUSE");
	return 0;
}
