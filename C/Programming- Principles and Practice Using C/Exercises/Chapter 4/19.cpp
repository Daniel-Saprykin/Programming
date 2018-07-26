// Напишите программу, в которую сначала вводится набор пар, состоящих из имени и значения, например Joe 17 и Barbara 22.
// Для каждой пары занесите имя в вектор names, а число - в вектор scores(в соответствующие позиции.
// так что если names [7]=="Joe". то scores [7]=17 ) . Прекратите ввод. встретив строку ввода NoName О. 
// Убедитесь. что каждое имя единственное. и выведите сообщение об ошибке. если имеется имя, введенное дважды. 
// Выведите на печать все пары (имя. балл ы) по одной в строке.



#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	vector<string> name;
	vector<int> score;

	string names;
	int scores;
	int count = 0; // проверяем, что это первый элемент вектора
	bool flag = true; // проверка на наличие слова
	
	while (cin >> names >> scores)
	{
		if (count == 0) // добавляем первое значение в вектор
		{
			name.push_back(names);
			score.push_back(scores);
			names = " ";
			scores = 0;
		}

		if (names == "noname" && scores == 0) // для выхода
		{
			break;
		}

		if (flag)
		{
			for (int i = 0; i < name.size(); i++) // проверяем совпадения имени в векторе
			{

				if (name[i] == names)
				{
					cout << "ошибка такое имя уже существует" << endl;
					flag = false; // если такое имя уже есть переводим flag в false
				}
			}
		}
		
		if (count != 0 && flag) // если flag = false такое имя уже есть, добавлять его не будем
		{
			name.push_back(names);
			score.push_back(scores);
		}
	
		count++;
		flag = true; 
	}


	for (int i = 0; i < name.size(); i++)
	{
		cout << "name: " << name[i] << ' ' << " scores: " << score[i] << endl;
	}

	system("PAUSE");
	return 0;
}
