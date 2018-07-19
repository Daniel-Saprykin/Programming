// Напишите программу. находящую все простые числа между 1 и 100. Для этого можно написать функцию. проверяющую. 
// является ли число простым (т.е. делится ли оно на простое число, не превосходящее
// данное). используя вектор простых чисел, записанный в порядке возрастания (например, если вектор называется primes, 
// то primes [0]=2, primes [1]=3, primes [2]=5 и т.д.). Напишите цикл перебора чисел от 1 до 100. проверьте каждое из них 
// на простоту и сохраните найденные простые числа в векторе. Напишите другой цикл. в котором все найденные простые числа 
// выводятся на экран. Сравните полученные результаты с вектором primes. Первым простым числом считается число 2.

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

	int low = 2, higt = 100;
	int foon = 0;
	cout << "Выводим простые числа между 1 и 100" << endl;


	foon = foo(low, higt);
	vector<int> vec;
	vec.push_back(foon);


	for (int x : vec) cout << x << endl;


	system("PAUSE");
	return 0;
}
