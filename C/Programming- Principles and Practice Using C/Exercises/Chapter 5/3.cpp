// Самой низкой температурой является абсолютный нуль, т.е. -273.l5°C, или 0К. Даже после исправления приведенная 
// выше программа выводит неверные результаты для температуры ниже абсолютного нуля. Поместите в функцию main() 
// проверку, которая будет выводить сообщение об ошибке для температур ниже -273. 15°С



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
    if(k < -273.15) cout << "Ошибка температура меньше -273.15" << endl;

    else cout << k << endl;


    system("pause");
    return 0;
}
