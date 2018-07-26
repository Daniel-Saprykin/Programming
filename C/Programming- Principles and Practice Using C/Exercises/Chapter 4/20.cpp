// Измените программу из упр. 19 так, чтобы при вводе имени она выводила соответствующее количество 
// баллов или сообщение "Имя не найдено "



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
	
	cout << "Введите имя и баллы" << endl;

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

	names = " ";
	cout << "Введите имя: " << endl;
	cin >> names;

	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == names && flag)
		{
			cout << "имя " << name[i] << " Количество балов: " << score[i] << endl;
			flag = false;
		}
	}

	if (flag)
	{
		cout << "Имя не найденно " << endl;
	}


	


	system("PAUSE");
	return 0;
}
