#include <iostream>
#include "arrayOps.h"

using namespace std;

class selectionSort
{
	int *arr = NULL;
	int size = -1;

public:
	int *getArr();
	int getSize();
	void setSize(int size_);
	void setArr(int *arr_);

	void selectionSorting();
};

int *selectionSort ::getArr()
{
	return arr;
}

int selectionSort ::getSize()
{
	return size;
}

void selectionSort ::setSize(int size_)
{
	size = size_;
}

void selectionSort ::setArr(int *arr_)
{
	arr = arr_;
}

void selectionSort ::selectionSorting()
{
	int currMin, currLoc, minLoc, globalMin;

	currMin = arr[0];
	currLoc = 0;
	minLoc = 0;
	globalMin = arr[0];

	for (int i = 0; i < size - 1; i++)
	{
		currMin = arr[i];
		globalMin = arr[i];
		minLoc = i;
		for (int j = i; j < size; j++)
		{

			if (arr[j] < globalMin)
			{
				globalMin = arr[j];
				minLoc = j;
			}
		}

		arr[i] = globalMin;
		arr[minLoc] = currMin;
	}
}

int main()
{
	// helloWorld();
	//  cout << " Enter Size of the Array" << endl;
	//  cin >> size;

	selectionSort s1;
	s1.setSize(20);

	s1.setArr(createArray(s1.getSize(), s1.getArr()));

	cout << "Is the array sorted : " << isSorted(s1.getArr(), s1.getSize()) << endl
		 << endl;

	displayArray(s1.getSize(), s1.getArr());

	s1.selectionSorting();

	cout << "Is the array sorted : " << isSorted(s1.getArr(), s1.getSize()) << endl
		 << endl;

	displayArray(s1.getSize(), s1.getArr());
}