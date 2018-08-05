// Повторите упр.3, но в этот раз ошибку обрабатывайте в функции ctok() 

#include <iostream>


using namespace std;


 double ctok (double c )
 {
     double k = c + 273.15;
     if(k < -273.15) cout << "Ошибка температура меньше -273.15" << endl;

     else cout << k << endl;
     return k;
 }

int main()
{
    setlocale(LC_ALL,"rus");

    double c = 0;
    double k = 0;
    cin >> c;
    k = ctok(c);

    system("pause");
    return 0;
}
