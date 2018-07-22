// Измените программу описанную в предыдущем упражнении, так, чтобы в нее вводилось число max, а затем 
// найдите все простые числа от 1 до max.

#include <iostream>
#include <vector>


using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	int N = 0;
	cout << "Введите число до которого нужно найти простые числа" << endl;
	cin >> N;
	vector<int> a(N);

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
