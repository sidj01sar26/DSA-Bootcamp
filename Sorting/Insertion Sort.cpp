#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int size)
{
    for (int round = 1; round < size; round++)
    {
        int val = arr[round];
        int j = round - 1;
        for (; j >= 0 && arr[j] > val; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = val;
    }
}
