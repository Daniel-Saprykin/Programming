// На пишите программу, предлогающую пользователю ввести определенное количество 1, 5, 10, 25, 50 -центовых и долларовых монет
// Пользователь должен по отдельности ввести количество монет каждого достоинства.
// Усовершенствуйте программу: если у пользователя одна монета выведите ответ в грамматически правильной форме. например,
// "14 десятицентовых монет" и "1 одноцентовая монета". Кроме того, выведите результат в долларах и центах т.е 
// 5 долларов 73 цента а не 573 цента .


#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");


	int penny = 0, five_cent = 0, ten_cent = 0, Quarter_dollar = 0, Half_dollar = 0;
	int sum = 0;
	
	cout << "Сколько у вас одноцентовых монет: " << endl;
	cin >> penny;

	cout << "Сколько у вас пятицентовых монет: " << endl;
	cin >> five_cent;

	cout << "Сколько у вас десятицентовых монет: " << endl;
	cin >> ten_cent;

	cout << "Сколько у вас 25 центовых монет: " << endl;
	cin >> Quarter_dollar;

	cout << "Сколько у вас 50 центовых монет: " << endl;
	cin >> Half_dollar;

  // подсчитываем сумму всех монет
	sum += penny;
	sum += five_cent * 5;
	sum += ten_cent * 10;
	sum += Quarter_dollar * 25;
	sum += Half_dollar * 50;

	if (penny == 1 )
	{
		cout << "У вас " << penny << " одноцентовая монета" << endl;
	
	}
	else
	{
		cout << "У вас " << penny << " одноцентовых монеты" << endl;

	}
	if (five_cent == 1)
	{
		cout << "У вас " << five_cent << " пятицентовая монета" << endl;
	}
	else
	{
		cout << "У вас " << five_cent << " пятицентовых монеты" << endl;
	}
	if (ten_cent == 1)
	{
		cout << "У вас " << ten_cent << " десятицентовая монета" << endl;
	}
	else
	{
		cout << "У вас " << ten_cent << " десятицентовых монеты" << endl;
	}
	if (Quarter_dollar == 1)
	{
		cout << "У вас " << Quarter_dollar << " двацетипятицентовая монета" << endl;
	}
	else
	{
		cout << "У вас " << Quarter_dollar << " двацетипятицентовых монеты" << endl;
	}

	if (Half_dollar == 1)
	{
		cout << "У вас " << Half_dollar << " пятидесятицентовая монета" << endl;
	}
	else
	{
		cout << "У вас " << Half_dollar << " пятидесятицентовых монеты" << endl;
	}

	
	// определяем количество долларов и центов
	cout << "Общая стоимость ваших монет равна " << sum/100 << " Долларов " << sum % 100 << " цента" << endl;

	system("pause");
	return 0;
}
