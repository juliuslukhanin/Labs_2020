#include <iostream>
#include<cmath>
#include <locale>
#include "windows.h"

using namespace std;

double inputVar(char varName);

int main() {
	//set locale settings for correct work of ukrainian locale 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double varY = 0;
	double varA = 0;
	double varC = 0;
	double varN = 0;

	varC = inputVar('C');
	varA = inputVar('A');
	varN = inputVar('N');

	if (varA == varC && varA == varN)
	{
		varY = cos(varA + varC + varN);
	}
	else if (varA < varC && varC == varN)
	{
		varY = cos(varA * varC * varN);
	}
	else if (varA < varC && varC < varN)
	{
		varY = cos((varA + varC) * varN);
	}
	else
	{
		varY = 0;
	}
	cout << "«наченн€ Y = " << varY << endl;
	system("pause");
	return 0;
}

double inputVar(char varName) {
	cout << "¬вед≥ть число " << varName << ", будь ласка: ";
	double result;
	cin >> result;
	return result;
}

