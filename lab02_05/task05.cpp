#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {

	double varX = {};
	double epsilon = {};

	while (true)
	{
		cout << "Input x = ";
		cin >> varX;
		cout << "Input epsilon = ";
		cin >> epsilon;
		double varA = 1;
		double sum = varA;
		int index = 0;
		do
		{
			index++;
			varA *= varX / index;
			sum += varA;
		} while (abs(varA) > epsilon);
		cout << " epsilon = " << epsilon << "    sum =" << setprecision(12) << sum << endl;
	}
	system("pause");
	return 0;
}


