// CodeStudio

#include <bits/stdc++.h>

bool isPossible(int *arr, int n)
{
    int modifiedCount = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            if (modifiedCount == 1)
            {
                return false;
            }

            if (i == 1 || arr[i] >= arr[i - 2])
            {
                arr[i - 1] = arr[i];
            }
            else
            {
                arr[i] = arr[i - 1];
            }

            modifiedCount++;
        }
    }

    return true;
}