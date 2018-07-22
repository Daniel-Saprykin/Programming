// Напишите программу. находящую все простые числа межд.У l и 1 00. Для решения этой задачи существует классический метод 
// "Решето Эратосфена".


#include <iostream>
#include <vector>


using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	
	vector<int> a(100);

	//заполним все ячейки числами по порядку: 0,1,2,3...
	for (int i = 0; i<a.size(); i++) 
	{
		a[i] = i;
	}

	//поскольку 1 не простое число, обнулим ячейку с этим числом
	a[1] = 0;
	for (int s = 2; s<a.size(); s++)
	{
		if (a[s] != 0) 
		{
			for (int j = s * 2; j<a.size(); j += s)
			{
				a[j] = 0;
			}
		}
	}

	for (int i = 0; i<a.size(); i++)
	{
		if (a[i] != 0) 
		{
			cout << a[i] << endl;
		}
	}
	

	system("PAUSE");
	return 0;
}
