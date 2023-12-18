#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int round = 1; round < n; round++)
    {
        int swapCount = 0;
        for (int j = 0; j < n - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }

        if (swapCount == 0)
        {
            break;
        }
    }
}
