
#include <iostream>
#include <cstdlib>

using namespace std;

int getRandomNumber(int size_)
{
	return rand() % size_;
}

int *createArray(int size_, int *arr)
{
	cout << "\nCreating array with size: " << size_ << endl;
	arr = (int *)malloc(sizeof(int) * size_);
	for (int i = 0; i < size_; i++)
	{
		int temp = getRandomNumber(size_);
		arr[i] = temp;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Array created" << endl
		 << endl;
	return arr;
}

void displayArray(int size_, int *arr)
{
	cout << "Displaying array with size: " << size_ << endl;
	for (int i = 0; i < size_; i++)
	{
		cout << (arr[i]) << " ";
	}
	cout << "\n Output completed" << endl
		 << endl;
	cout << endl;
}

void helloWorld()
{
	cout << "Hello World !" << endl;
}

bool isSorted(int *arr, int size_)
{

	for (int i = 0; i < size_ - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			return false;
	}

	return true;
}
