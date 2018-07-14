// Напишите программу переводящую мили в километры

#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	double mile= 0, km = 0;

	cout << "Введите количество миль: ";
	cin >> mile;

	km = mile * 1.609;
	cout << "в " << mile << " миле " << km << " Километров" << endl;

	system("pause");
	return 0;
}
