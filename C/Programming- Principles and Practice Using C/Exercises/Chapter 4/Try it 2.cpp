// Перепишите программу преобразования валют из предыдущего раздела. используя инструкцию switch. 
// Добавьте конвертацию евро и фунта стерлингов.

#include <iostream>
#include <clocale>


using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	double val1 = 0;
	char currency  = ' ';

	cin >> val1 >> currency;

	switch (currency)
	{
	case 'h':
		cout << val1 << " гривн  == " << val1 * 0.038 << " $" << endl;
		break;
	case 'r':
		cout << val1 << " рубль  == " << val1 * 0.016 << " $" << endl;
		break;
	case 'y':
		cout << val1 << " юань  == " << val1 * 0.15 << " $" << endl;
		break;
	case 'e':
		cout << val1 << " евро  == " << val1 * 1.17 << " $" << endl;
		break;
	case 'f':
		cout << val1 << " юань  == " << val1 * 1.32 << " $" << endl;
		break;
	default:
		cout << "Значение неизветсно " << endl;
		break;
	}

	
	system("pause");
	return 0;
}
