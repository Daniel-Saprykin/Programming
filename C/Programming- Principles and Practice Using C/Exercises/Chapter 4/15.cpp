// Напишите программу, принимающую на вход число n и находящую первые n простых чисел.

#include <iostream>
#include <vector>


using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");


	int low = 2, high, flag, count = 1;

	cin >> high;

	while (count < high)
	{
		flag = 0;

		for (int i = 2; i < low / 2; i++)
		{
			if (low % i == 0)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			cout << count << '\t' << low << endl;
			count++;
		}
		low++;
	}
	

	system("PAUSE");
	return 0;
}
