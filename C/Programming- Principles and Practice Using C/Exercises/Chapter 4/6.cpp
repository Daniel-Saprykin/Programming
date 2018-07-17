// Создайте вектор, хранящий десять строковых значений "zero", "one", "...", "nine". Используйте его в программе, 
// преобразующей цифру в соответствующее строковое представление: например, при вводе цифры 7 на экран должна быть 
// выведена строка seven. С помощью этой же программы, используя тот же цикл ввода, преобразуйте строковое
// представление цифры в числовое: например, при вводе строки seven на экран должна быть выведена цифра 7.

#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	vector<string> vecstr{ "zero","one","two","three","four",
			       "five","six","seven","eight","nine" };

	vector<string> vecval{ "0","1","2","3","4","5","6","7","8","9" };


	int val = 0;
	string str = " ";

	while (cin >> str)
	{
		
		for (int i = 0; i < vecstr.size(); i++)
		{
			if (vecstr[i] == str)
			{
				cout << i << endl;
			}
			else if (vecval[i] == str)
			{
				cout << vecstr[i] << endl;
			}
		}
	
	}

	
	system("PAUSE");
	return 0;
}
