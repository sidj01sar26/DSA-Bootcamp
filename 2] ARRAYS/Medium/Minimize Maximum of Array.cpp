// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimizeArrayValue(vector<int> &A)
    {
        long sum = 0;    // Initialize the cumulative sum of elements
        long maxVal = 0; // Initialize the maximum value to be minimized

        // Iterate through the array
        for (int i = 0; i < A.size(); i++)
        {
            sum += A[i]; // Add the current element to the cumulative sum

            // Calculate the current maximum value needed to minimize the array
            // (sum + i) / (i + 1) gives the average value rounded up
            maxVal = max(maxVal, (sum + i) / (i + 1));
        }

        return maxVal; // Return the minimized maximum value
    }
};