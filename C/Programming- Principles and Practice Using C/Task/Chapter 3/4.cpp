#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");
	string first_name, frien_name;
	char friend_sex = 0;

	cout << "Введите имя адресата: ";
	cin >> first_name;
	cout << "Введите имя приятеля: ";
	cin >> frien_name;
	cout << "Введите пол вашего друга M(male)/F(female): " << endl;
	cin >> friend_sex;

	cout << endl;
	cout << "Дорогой, " << first_name << endl;
	cout << "Как дела? у меня все хорошо. Я скучаю по тебе." << endl;
	cout << "Давно ли ты встречал " << frien_name << "?"<< endl;

	if (friend_sex == 'm')
	{
		cout << "Если ты увидешь " << frien_name << ", пожулуйста, попроси его позвонить мне" << endl;
	}
	else if (friend_sex == 'f')
	{
		cout << "Если ты увидешь " << frien_name << ", пожулуйста, попроси еe позвонить мне" << endl;
	}


	system("pause");
	return 0;
}
