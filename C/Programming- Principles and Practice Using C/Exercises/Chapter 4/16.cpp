// В заданиях вам было предложено написать программу. которая для определенного ряда чисел определяла бы 
// наибольшее и наименьшее числа в нем. Число, которое повторяется в последовательности наибольшее количество раз, 
// называется модой. Напишите программу. определяющую мод.У множества положительных чисел.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	int count = 0, temp = 0, temp2 = 0;

	vector<int> vec{ 2,1,3,5,6,5,4,5 };
	vector<int> vec_mode{};
	vector<int> value{};

	sort(vec.begin(), vec.end());

	//подсчитываем количество чисел, добавляем их количество и сами числа в вектор
	for (int i = 0; i < vec.size(); i++)
	{
		temp = vec[i];

		if (i != vec.size() -1 )
		{
			temp2 = vec[i + 1];
		}

		for (int j = 0; j < vec.size(); j++)
		{
		
			if (temp == vec[j])
			{
				count++;
			}	

		}
		
		if (temp != temp2)
		{
			vec_mode.push_back(temp); //вектор хранит числа
			value.push_back(count); //вектор хранит количество повторений
		}
		count = 0;
	}

	
	
	//находим наибольшее значение в векторе
	// это и будет наша мода
	int max = vec[0];
	int count2 = 0;
	for (int i = 0; i < value.size(); i++)
	{
		if (max <= value[i])
		{
			max = value[i];
			count2++;
		}
		
	}

	
	cout << "MODA: " << vec_mode[count2 -1] << '\t' << "counter: " << value[count2 -1] << endl;


	system("PAUSE");
	return 0;
}
