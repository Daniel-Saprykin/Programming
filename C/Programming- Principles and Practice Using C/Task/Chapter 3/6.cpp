#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");
	string first_name, frien_name;
	char friend_sex = 0;
	int age = 0;

	cout << "Введите имя адресата: ";
	cin >> first_name;
	cout << "Введите имя приятеля: ";
	cin >> frien_name;
	cout << "Введите пол вашего друга M(male)/F(female): " << endl;
	cin >> friend_sex;
	cout << "Введите возраст вашего друга: " << endl;
	cin >> age;

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

	if (age > 110 || age <= 0)
	{
		cout << "Ты шутишь!" << endl;
	}
	else
	{
		cout << "Я слышал ты только что отметил свой день рождения и тебе исполнилось " << age << " лет" << endl;
	}
	
	if (age <= 12)
	{
		cout << "На следующий год тебе исполнится " << age + 1 << " лет." << endl;
	}
	else if (age == 17)
	{
		cout << "В следующем году ты сможешь голосовать " << endl;
	}
	else if (age >= 70)
	{
		cout << "Я надеюсь, что ты не сдох там" << endl;
	}
	cout << endl;
	cout << endl;
	cout << "Искренне твой  В.В Путин "<<endl;


	system("pause");
	return 0;
}
