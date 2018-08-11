#include <iostream>
#include <vector>

using namespace std;




int main()
{
    setlocale(LC_ALL,"rus");
    

    cout << "Введите количество суммируемых значенией: " << endl;

    int n, sum = 0;
    cin >> n;


    cout << "Заполните вектор значениеями: " << endl;
    vector<int> vec;
    for(int temp; cin>> temp;)
        vec.push_back(temp);

    if (n < 0)
    {
        cout << "Введенно отрицательное значение " << n << endl;
    }

    else if(n > vec.size())
    {
        cout << "Введенное значение " << n << " больше чем размер вектора " << endl;

    }


    else
    {
        cout << "Сумма первых: " << n << " чисел "<< "( ";
        for(int i = 0; i < n; i++)
        {
            sum += vec[i];
             cout << vec[i] << " ";
        }
        cout << ")"<< " равна = " << sum << endl;
    }


    system("pause");
    return 0;
}
