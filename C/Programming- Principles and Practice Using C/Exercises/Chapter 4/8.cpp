// Легенда гласит, что некий царь захотел поблагодарить изобретателя шахмат и предложил ему попросить любую награду. 
// Изобретатель попросил положить на первую клетку одно зерно риса. на вторую - два. на третью - четыре и так далее, 
// удваивая количество зерен на каждой из 64 клеток. На первый взгляд. это желание выглядит вполне скромным. 
// но на самом деле в царстве не было такого количества риса! Напишите программу. вычисляющую. сколько клеток надо заполнить. 
// чтобы изобретатель получил не менее 1 ООО зерен риса, не менее 1 ООО ООО зерен риса и не менее 1 ООО ООО ООО зерен риса. Вам,
// разумеется. понадобится цикл и. вероятно, несколько переменных типа int. для того чтобы отслеживать текущий номер клетки. 
// количество зерен в текущей клетке и количество зерен во всех предыдущих клетках. Мы предлагаем на каждой итерации цикла 
// выводить на экран значения всех этих переменных, чтобы видеть промежуточные результаты




#include <iostream>
#include <cmath>
#include <vector>
#include <string>

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

	cout << "Введите номер клетки: ";
	cin >> kletki;

	for (int i = 1; i <= kletki; i++)
	{
		sum += buff;
		buff = sum;

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

		cout  << i << "...."<< sum << endl;
	}
	cout << endl;
	cout << "одна тысяча зерен "<< one_thousand << " клетка" << endl;
	cout << "один миллион зерен "<< million << " клетка" << endl;
	cout << "Одни миллиард зерен " << billion  << " клетка"<< endl;

	system("PAUSE");
	return 0;
}
