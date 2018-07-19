// Измените программу из предыд.Ущего упражнения так, чтобы в нее вводилось число max, 
// а затем найдите все простые числа от 1 до max.


#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;


int foo(int low, int higt)
{
	int flag;

	while (low < higt)
	{
		flag = 0;

		for (int i = 2; i <= low / 2; i++)
		{
			if (low % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0) cout << low << " ";

		++low;
	}
	return low;
}



int main()
{
	setlocale(LC_ALL, "Russian");

	int low = 2, higt;
	int foon = 0;

	cin >> higt;
	cout << "Выводим простые числа между 1 и 100" << endl;


	foon = foo(low, higt);
	vector<int> vec;
	vec.push_back(foon);


	for (int x : vec) cout << x << endl;


	system("PAUSE");
	return 0;
}
