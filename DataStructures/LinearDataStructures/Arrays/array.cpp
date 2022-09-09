#include <iostream>

using namespace std;

int *logicalDeletionFromArray(int *arr, int sizeOfArr, int location)
{
    cout << "Performing logical deletion on an array of size" << sizeOfArr << "From the location " << location << endl;
    cout << "The data from the specified location is lost forever" << endl;
    if (sizeOfArr == location)
    {
        arr[location] = 0;
        return arr;
    }

    for (int i = location; i < sizeOfArr - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return arr;
}

void readArray(int *arr, int sizeOfArr)
{
    cout << "\nDisplaying the data from the array" << endl;

    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;
    return;
}

int main()
{
    cout << "The first Data Structure we come acros is the array " << endl;
    cout << "It is nothing but a linearly allocated space in memory for the same data type \n\n"
         << endl;

    int arr[] = {1, 2, 3, 4, 5};
    cout << "Array can be predefined and static as well" << endl;

    int arraySize = 10;                                    // this variable can be defined at the run time
    int *dynamic = (int *)malloc(sizeof(int) * arraySize); // The integer pointer implies that we can create run time specified arrays

    cout << "There are primarily two ways one can traverse an array." << endl
         << "The most common one being using a for loop (which we will be using) and the other one being while loop\n\n"
         << endl;

    readArray(arr, 5);

    cout << "\n\nFor data manipulation we just have to access the element with number specifying the location with the pointer" << endl;

    arr[3] = 69; // changing the data at the 4th location to a new integer

    readArray(arr, 5);

    cout << "\n\nThe deletion of array elements is not possible, but logical deletion can be commenced for the listed elements" << endl;

    int *newArr = logicalDeletionFromArray(arr, 5, 2);

    readArray(newArr, 5);

    cout << "\n\n\nPS: For competitive coding and day to day usage vectors are preferred over arrays in CPP for a number of reasons we will be dipping in them in the topic of STL library " << endl;
}