// Следующая программа получает температуру в градусах Цельсия и преобразует ее в температуру в градусах Кельвина. 
// Этот исходный текст содержит много ошибок. Найдите ошибки. перечислите их и исправьте программу.

#include <iostream>


using namespace std;


 double ctok (double c )
 {
     double k = c + 273.15;
     return k;
 }

int main()
{
    setlocale(LC_ALL,"rus");

    double c = 0;
    double k = 0;
    cin >> c;
    k = ctok(c);

    cout << k << endl;


    system("pause");
    return 0;
}
