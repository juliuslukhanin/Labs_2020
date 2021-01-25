#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

void sortArray(int* array, int size);
void printArray(int  array[6][5]);

int main() {

	int array[6][5] = {
		{1,-2, 4, 15, -9},
		{11,-24, 14, 7, 12},
		{1, 6, 5, 7, 12},
		{23,10, -1, 8, 12},
		{12,-12, 41, -7, 6},
		{-31,2, -4, 5, 3}
	};

	printArray(array);
	// task 01 part 
	int sum = {};
	for (size_t index1 = 0; index1 < 6; index1+=2)
	{
		for (size_t index2 = 1; index2 < 5; index2+=2)
		{
			if (array[index1][index2] > 0) 
				sum += array[index1][index2];
		}
	}
	cout << endl << "Task 01:" << endl;
	cout << "Sum of elements is equal to " << sum << endl;
	// task 02 part 
	for (size_t index1 = 1; index1 < 6; index1 += 2)
	{
		sortArray(array[index1], 5);
	}
	cout << endl << "Task 02 - Sorted Array: " << endl;
	printArray(array);
	system("pause");
	return 0;
}

void printArray(int  array[6][5])
{
	cout << "Array output: " << endl;
	for (size_t index1 = 0; index1 < 6; index1++)
	{
		for (size_t index2 = 0; index2 < 5; index2++)
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



