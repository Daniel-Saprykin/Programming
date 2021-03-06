// Напишите программу. преобразовывающую температуру в градусах Цельсия в температуру в градусах 
// Фаренгейта и обратно (по формуле из раздела 4.3.3). Воспользуйтесь оценками (раздел 5.8) для того, чтобы 
// убедиться в правдоподобности результатов.



#include <iostream>


using namespace std;


void invite()
{
    cout << endl;
    cout << "Преобразование температуры по шкале Цельсия в температуру по шкале Фаренгейта: (f)" << endl;
    cout << "Преобразование температуры по шкале Фаренгейта в температуру по шкале Цельсия: (c)" << endl;
    cout << "exit (e)" << endl;
}


int main()
{
    setlocale(LC_ALL,"rus");

    double d = 0;
    char t = ' ';
    bool check = true;

    if(check) // проверка вывода приглашения
    {
        invite();
        check = false;
    }

    while (true)
    {

        if(check)
        {
           invite(); // проверка вывода приглашения
        }
        cin >> t;

        if(t == 'e') break; //выход из цикла

        cout << "Введите температуру: ";
        cin >> d;


        double tf = 9.0/5*d+32; //Преобразование температуры по шкале Цельсия в температуру по шкале Фаренгейта
        double tc = 9.0/5*d-32; //Преобразование температуры по шкале Фаренгейта в температуру по шкале Цельсия

        switch (t)
        {
        case 'f':
            cout << tf  << " По фаренгейту"<< endl;

            break;
        case 'c':
            cout << tc <<" По цельсию" <<  endl;
            break;

        }
        check = true;
    }


    system("pause");
    return 0;
}
