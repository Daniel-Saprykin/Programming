// Напишите программу. "заглушающую" нежелательные слова; иначе говоря, считывайте слова из потока cin 
// и выводите их в поток cout, заменяя нежелательные слова словом BLEEP. Начните с одного 
// нежелательного слова, например string disliked = "Broccoli"; Когда отладите программу, 
// добавьте еще несколько нежелательных слов


#include <iostream>
#include <clocale>
#include <vector>
#include <string>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	// вектор хранящий запрещенные слова
	vector<string> taboo{ "broccoli","apple","orange","work" };

	vector<string> word{};
	for (string temp; cin >> temp;)
		word.push_back(temp);

	for (int i = 0; i < word.size(); i++)
	{
		for (int j = 0; j < taboo.size(); j++)
		{
			if (word[i] == taboo[j])
			{
				word[i] = "BLEEP";
				
			}
		}	
	}

	for (string x : word) cout << x << endl;
	

	system("pause");
	return 0;
}
