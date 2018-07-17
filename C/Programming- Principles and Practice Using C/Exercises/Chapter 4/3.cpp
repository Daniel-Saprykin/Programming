// Прочтите последовательности чисел типа douЬle в вектор. Будем считать, что каждое значение представляет собой расстояние 
// между двумя городами, расположенными на определенном маршруте. Вычислите и выведите на печать общее расстояние 
// (сумму всех расстояний).Найдите и выведите на печать наименьшее и наибольшее расстояния между двумя соседними городами. 
// Найдите и выведите на печать среднее расстояние между двумя соседними городами.


#include <iostream>
#include <clocale>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	double sum = 0;
	double max = 0;
	double min = 0;
	vector<double> vec;
	for (double temp; cin >> temp;)
		vec.push_back(temp);

	for (int i = 0; i < vec.size(); i++)
	{
		sum += vec[i];
	}

	sort(vec.begin(), vec.end());

	max = vec[vec.size() -1];
	min = vec[0];

	cout << endl;
	cout << "MAX: " << max << endl;
	cout << "MIN: " << min << endl;
	cout << "Сумма всех расстояний: " << sum << endl;

	system("pause");
	return 0;
}
