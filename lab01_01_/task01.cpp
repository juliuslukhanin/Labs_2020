#include <iostream>
#include<cmath>
#include <locale>
#include "windows.h"

using namespace std;

void calc(double m);

int main() {
	//set locale settings for correct work of ukrainian locale 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double m;

	while (true)
	{
		cout << "input some positive number(>=0), please:" << endl;
		cout << "m = ";
		cin >> m;
		calc(m);
	}

	system("pause");
	return 0;
}

void calc(double m) {
	double z1;
	double z2;
	z1 = sqrt(pow((3 * m + 2), 2) - 24 * m) / (3 * sqrt(m) - 2 / sqrt(m));
	z2 = sqrt(m);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
}
