// Модифицируйте мини-калькулятор, описанный в упр. 5, так. чтобы он принимал на вход цифры. 
// записанные как в числовом, так и в строковом формате.

#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	vector<string> vecstr{ "zero","one","two","three","four",
						   "five","six","seven","eight","nine" };

	vector<string> vec_val_srt{ "0","1","2","3","4","5","6","7","8","9" };
	vector<int> vecval{ 0,1,2,3,4,5,6,7,8,9 };

	int val1 = 0, val2 = 0;
	string strval1 = " ", srtval2 = " ";
	char oper = ' ';

	while (strval1 != "exit") // Эпическое условие выхода :*D
	{
		cin >> strval1;
		cin >> oper;
		cin >> srtval2;
		for (int i = 0; i < vecstr.size(); i++) // определяем число
		{
			if (vecstr[i] == strval1)
			{
				val1 = i;
			}

			else if (vec_val_srt[i] == strval1)
			{
				val1 = vecval[i];
			}

			if (vecstr[i] == srtval2)
			{
				val2 = i;
			}

			else if (vec_val_srt[i] == strval1)
			{
				val2 = vecval[i];
			}
		}

		switch (oper)
		{
		case'+':
			cout << "Сумма " << val1 << " и " << val2 << " Равна " << val1 + val2 << endl;
			break;
		case'-':
			cout << "Разность " << val1 << " и " << val2 << " Равна " << val1 - val2 << endl;
			break;
		case'*':
			cout << "Произведением " << val1 << " и " << val2 << " Равна " << val1 * val2 << endl;
			break;
		case'/':
			cout << "Частное " << val1 << " и " << val2 << " Равна " << val1 / val2 << endl;
			break;
		default:
			cout << "введена неизвестная операция: " << oper << endl;
			break;
		}
	
	}

	
	system("PAUSE");
	return 0;
}
