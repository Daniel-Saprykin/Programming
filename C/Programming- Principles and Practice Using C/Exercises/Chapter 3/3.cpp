// Напишите программу, которая ничего не делает, а просто объявляет ряд переменных 
// с допустимыми и недопустимыми именами (например, int double = 0;) и посмотрите на
// реакцию на них компилятора

#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");
  
  int count = 0; 
	int double = 0;
  double value = 0;
	double for = 0;
	char bool = true;
	bool if = false;


	system("pause");
	return 0;
}
