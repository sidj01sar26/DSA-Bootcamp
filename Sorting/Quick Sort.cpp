#include <iostream>
using namespace std;

int partitionArray(int input[], int start, int end)
{
    int pivot = input[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (input[j] <= pivot)
        {
            i++;
            swap(input[i], input[j]);
        }
    }

    swap(input[i + 1], input[end]);

    return i + 1;
}

void quickSort(int input[], int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partitionArray(input, start, end);

        quickSort(input, start, pivotIndex - 1);
        quickSort(input, pivotIndex + 1, end);
    }
}

int main()
{
    int arr[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
