// Напишите программу, содержащую цикл while, в котором считываются и выводятся на экран два числа типа int 
// для выхода из программы используйте символ '|'.

#include <iostream>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	int val1 = 0, val2 = 0;

	while (cin >> val1 >> val2)
	{
		cout << "Значение 1: " << val1 << endl;
		cout << "Значение 2: " << val2 << endl;
		cout << endl;
	}


	system("pause");
	return 0;
}
