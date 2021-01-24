#include <iostream>
#include<cmath>
#include <locale>
#include "windows.h"

using namespace std;

int calc(int number);

int main() {
	//set locale settings for correct work of ukrainian locale 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	while (true)
	{
		cout << "¬вед≥ть ц≥ле n:" << endl;
		cout << "n = ";
		cin >> n;
		cout << "—ума р€ду дор≥внюЇ: " << calc(n) << endl;
	}
	system("pause");
	return 0;
}

int calc(int number) {
	int sum = 0;
	for (size_t i = 1; i <= number; i++)
	{
		if(i%2 == 1) 
		{
			sum += i * i; 
		}
		else
		{
			sum -= i * i;
		}
	}
	return sum;
}
