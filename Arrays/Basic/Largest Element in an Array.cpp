// CodeStudio

#include <bits/stdc++.h>
#include<vector>
using namespace std;

int largestElement(vector<int> &arr, int n)
{
    int maxElement = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    return maxElement;
};
