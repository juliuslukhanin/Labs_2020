#include <iostream>
#include<cmath>
#include<iomanip>
#include <locale>
#include "windows.h"

using namespace std;

const double SEA_MILES_TO_KM = 1.852;

void printTableSeaMilesToKm(double value, double step, int size);

int main() {
	//set locale settings for correct work of ukrainian locale 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double firstValue = 0;
	double stepValue = 0;
	int tableSize = 0;

	while (true)
	{
		cout << "Input first value in sea miles: ";
		cin >> firstValue;
		cout << "Input step value in sea miles: ";
		cin >> stepValue;
		cout << "Input size of the table: ";
		cin >> tableSize;

		printTableSeaMilesToKm(firstValue, stepValue, tableSize);

		
	}
	system("pause");
	return 0;
}


void printTableSeaMilesToKm(double value, double step, int size) {
	double currentSeaMiles = value;
	double currentKm = 0;
	
	cout << "Table of correspondence between sea mile and km:" << endl<< endl;
	// print header
	cout.width(75); cout.fill('_'); cout << ""<< endl;
	cout.fill(' ');
	cout << left << setw(15) << setfill(' ') << "Number";
	cout << left << setw(30) << setfill(' ') << "Sea miles";
	cout << left << setw(30) << setfill(' ') << "Kilometers" << endl;
	
	cout.width(75); cout.fill('_'); cout << "" << endl;
	// print data
	for (size_t index = 1; index <= size; index++, currentSeaMiles += step)
	{
		currentKm = currentSeaMiles * SEA_MILES_TO_KM;

		cout << left << setw(15)<<setfill(' ') <<  index;
		cout << left << setw(30) << setfill(' ') << currentSeaMiles;
		cout << left << setw(30) << setfill(' ') << currentKm  << endl;
	}

	

}
