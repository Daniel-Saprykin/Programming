#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");
	string first_name;

	cout << "Введите имя адресата: ";
	cin >> first_name;

	cout << "Дорогой, " << first_name << endl;
  
  
	system("pause");
	return 0;

}
