#include <iostream>
#include<cmath>
#include<iomanip>
#include <cstdlib> 
#include <ctime>

using namespace std;

void sortArray(int* array, int size);
void printArray(int** array, int arraySize1, int arraySize2);
void fillRandomArray(const int& size, int* array);

int main() {
	srand(static_cast<unsigned int>(time(0)));
	int arraySize1 = {}, arraySize2 = {};
	cout << "Input size1  "; cin >> arraySize1;
	cout << "Input size2  "; cin >> arraySize2;

	int** array = new int* [arraySize1];
	for (size_t i = 0; i < arraySize1; i++)
	{
		array[i] = new int[arraySize2];
	}

	for (size_t i = 0; i < arraySize1; i++)
	{
		fillRandomArray(arraySize2, array[i]);
	}

	printArray(array, arraySize1, arraySize2);
	// task 01 part 
	int sum = {};
	for (size_t index1 = 0; index1 < arraySize1; index1 += 2)
	{
		for (size_t index2 = 1; index2 < arraySize2; index2 += 2)
		{
			if (array[index1][index2] > 0)
				sum += array[index1][index2];
		}
	}
	cout << endl << "Task 01:" << endl;
	cout << "Sum of elements is equal to " << sum << endl;
	// task 02 part 
	for (size_t index1 = 1; index1 < arraySize1; index1 += 2)
	{
		sortArray(array[index1], arraySize2);
	}
	cout << endl << "Task 02 - Sorted Array: " << endl;
	printArray(array, arraySize1, arraySize2);
	system("pause");
	return 0;
}

void printArray(int  **array, int arraySize1, int arraySize2)
{
	cout << "Array output: " << endl;
	for (size_t index1 = 0; index1 < arraySize1; index1++)
	{
		for (size_t index2 = 0; index2 < arraySize2; index2++)
		{
			cout << setw(6) << array[index1][index2] << " ";
		}
		cout << endl;
	}
}

void sortArray(int* array, int size)
{
	int indexK;
	do
	{
		indexK = 0;
		for (int i = 0; i < size - 1; i++)
			if (array[i] > array[i + 1])
			{
				int buffer = array[i];
				array[i] = array[i + 1];
				array[i + 1] = buffer;
				indexK++;
			}
	} while (indexK > 0);
}

void fillRandomArray(const int& size, int* array)
{
	
	for (size_t i = 0; i < size; i++)
	{
		
		array[i] = (rand() - 16000) / 1000;	
	}
}



