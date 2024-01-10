#include <iostream>
#include "arrayOps.h"

using namespace std;

int main()
{
    helloWorld();

    int *arr;
    int size = 10;

    arr = createArray(size, arr);

    displayArray(size, arr);

    cout << "The array is sorted : " << isSorted(arr, size) << endl;
}