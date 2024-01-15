// CodeStudio

#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{

    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < firstLargest)
        {
            secondLargest = arr[i];
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}