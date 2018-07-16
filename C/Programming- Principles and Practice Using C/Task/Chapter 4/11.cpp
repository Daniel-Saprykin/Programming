// Перед тем как вывести значения из вектора, отсортируйте их в порядке возрастания.

#include <iostream>
#include <string>
#include <clocale>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	double val1 = 0;
	double max = -100000, min = 100000;
	string ed = " ";
	int value = 0, sum = 0;

	vector<double> vec2{};

	while (cin >> val1) vec2.push_back(val1);

	sort(vec2.begin(), vec2.end());

	for (double x : vec2) cout << x << endl;
	
	
	system("pause");
	return 0;
}
