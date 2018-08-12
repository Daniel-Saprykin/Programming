#include <iostream>
#include <vector>

using namespace std;




int main()
{
    setlocale(LC_ALL,"rus");


        cout << "Введите количество суммируемых значенией: " << endl;

        double n, sum = 0;
        cin >> n;


        cout << "Заполните вектор значениеями: " << endl;
        vector<double> real_numbers;
        vector<double> vec;
        for(double temp; cin>> temp;)
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


        for(int i = 0; i < vec.size() -1 ; i++)
        {
            real_numbers.push_back(vec[i] + vec[i+1]);
        }

        cout << "вектор действительных чисел" << endl;
        for(int x : real_numbers) cout << x << endl;

    system("pause");
    return 0;
}
