#include <iostream>

void merge(int *arr, int *left, int leftSize, int *right, int rightSize)
{
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr, int size)
{
    if (size <= 1)
        return;

    int mid = size / 2;
    int *left = new int[mid];
    int *right = new int[size - mid];

    for (int i = 0; i < mid; i++)
        left[i] = arr[i];

    for (int i = mid; i < size; i++)
        right[i - mid] = arr[i];

    mergeSort(left, mid);
    mergeSort(right, size - mid);

    merge(arr, left, mid, right, size - mid);

    delete[] left;
    delete[] right;
}

void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {10, 5, 8, 3, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    displayArray(arr, size);

    mergeSort(arr, size);

    std::cout << "Sorted Array: ";
    displayArray(arr, size);

    return 0;
}
