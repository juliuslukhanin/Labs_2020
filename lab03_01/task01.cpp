#include <iostream>
#include<cmath>
#include<iomanip>
#include <cstdlib> 
#include <ctime>

using namespace std;

int  countSumPositiveArrayElements(int* array, int size);
void sortArrayDescending(int* array, int size);
long countMultiplyElementsBetweenMinMaxAbs(int* array, int size);
void fillRandomAndPrintArray(const int& size, int  *array);

int main() {
	
	const int ARRAY_SIZE = 10;
	int array[ARRAY_SIZE];

	fillRandomAndPrintArray(ARRAY_SIZE, array);
	// task 01 part 
	cout << endl << "Task 01" << endl;
	cout << "The sum of positive elements of array equals : " << 
		countSumPositiveArrayElements(array, ARRAY_SIZE) << endl;
	// task 02 part 
	cout << endl << "Task 02: " << endl;
	long result2 = countMultiplyElementsBetweenMinMaxAbs(array, ARRAY_SIZE);
	cout << "Result is : " << result2 << endl;


	// task 03 part
	cout << endl << "Task 03: " << endl;
	sortArrayDescending(array, ARRAY_SIZE);
	cout << "Sorted array descendingly { ";
	for (size_t i = 0; i < ARRAY_SIZE; i++)
		cout << array[i] << " ";
	cout << "}" << endl;

	system("pause");
	return 0;
}

void fillRandomAndPrintArray(const int& size, int  *array)
{
	srand(static_cast<unsigned int>(time(0)));
	cout << "Array filled: " << endl;
	cout << "{ ";
	for (size_t i = 0; i < size; i++)
	{
		array[i] = (rand() - 16000)/1000;
		cout << array[i] << " ";
	}
	cout << "}" << endl;
}


int countSumPositiveArrayElements(int* array, int size)
{
	int result = {};
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] > 0)
			result += array[i];
	}
	return result;
}

long countMultiplyElementsBetweenMinMaxAbs(int* array, int size)
{
	int indexMin = 0;
	int indexMax = 0;
	int min = abs(array[0]);
	int max = min;
	long result = {};

	for (size_t i = 1; i < size; i++)
	{
		if (abs(array[i]) > max) {
			max = abs(array[i]);
			indexMax = i;
		} 
		if (abs(array[i]) < min) {
			min = abs(array[i]);
			indexMin = i;
		}
	}
	
	int indexMin1 = indexMin, indexMax1 = indexMax;
	
	if (indexMin > indexMax) {
		indexMin1 = indexMax, indexMax1 = indexMin;
	}
	result = array[indexMin1];
	for (int i = indexMin1 + 1; i <= indexMax1 ; i++)
		result *= array[i];

	return result;
}

void sortArrayDescending(int* array, int size)
{
	int indexK;
	do
	{
		indexK = 0;
		for (int i = 0; i < size - 1; i++)
			if (array[i] < array[i + 1])
			{
				int buffer = array[i];
				array[i] = array[i + 1];
				array[i + 1] = buffer;
				indexK++;
			}
	} while (indexK > 0);

}


