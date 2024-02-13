// CodeStudio

#include <bits/stdc++.h>
using namespace std;

void sortZeroesAndOne(int input[], int size)
{
    int count_zeros = 0;

    // Count the number of zeros
    for (int i = 0; i < size; i++)
    {
        if (input[i] == 0)
            count_zeros++;
    }

    // Fill the array with zeros
    for (int i = 0; i < count_zeros; i++)
    {
        input[i] = 0;
    }

    // Fill the remaining elements with ones
    for (int i = count_zeros; i < size; i++)
    {
        input[i] = 1;
    }
}
