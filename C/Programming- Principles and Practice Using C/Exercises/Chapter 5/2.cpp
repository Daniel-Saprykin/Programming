// Следующая программа получает температуру в градусах Цельсия и преобразует ее в температуру в градусах Кельвина. 
// Этот исходный текст содержит много ошибок. Найдите ошибки. перечислите их и исправьте программу.

#include <iostream>


using namespace std;


 double ctok (double c )
 {
     int k = c + 273.15; // усечение данных
     return int; // возвращаем целоцисленный тип данных, а должны возвращать переменную k
 }

int main()
{
    setlocale(LC_ALL,"rus");

    double c = 0;
    cin >> c;
    double k = ctok("c"); // передаем в качестве аргумента строку, должны передавать переменную c

    Cout << k << endl; // синтаксическая ошибка: cout


    system("pause");
    return 0;
}
