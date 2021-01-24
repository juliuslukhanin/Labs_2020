#include <iostream>
#include<cmath>
#include<iomanip>
#include <locale>
#include "windows.h"

using namespace std;



void printTableFunction();

int main() {
	//set locale settings for correct work of ukrainian locale 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printTableFunction();

	system("pause");
	return 0;
}


void printTableFunction() 
{	
	int size = 1 / 0.1;
	double varX = 0;
	double result = 0;
	for (size_t i = 0; i <= size; i++, varX+= 0.1)
	{
		result = sqrt(varX) * tan(varX);
		cout << right << setw(15) << setfill(' ') << varX;
		cout << right << setw(15) << setfill(' ') << result << endl;
	}
}
