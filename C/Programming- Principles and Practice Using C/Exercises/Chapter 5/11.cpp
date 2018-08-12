#include <iostream>

using namespace std;



int main()
{
    setlocale(LC_ALL,"rus");

    int sum = 0, counter = 0;
    int a = 1, b = 0;

    cout << "Последовательность Фибоначчи" << endl;


    cin >> counter;
    for(int i = 1; i < counter; i++)
    {
        sum = a;
        a += b;
        b = sum;
        cout << sum << endl;
    }


    system("pause");
    return 0;
}
