#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	
	double varX;
	int varN;
	
	while (true)
	{	
		cout << "Input x = ";
		cin >> varX;
		cout << "Input n = ";
		cin >> varN;
		double varA = 1;
		double sum = varA;
		int index = 0;
		do
		{
			index++;
			varA *= varX / index;
			sum += varA;
		} while (index < varN);
		cout << "n = " << varN << "  " << "sum =" << setprecision(12) << sum << endl;
	}

	system("pause");
	return 0;
}


