// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxChunksToSorted(vector<int> &arr)
    {
        int maxVal = INT_MIN;
        // Initialize the maximum value encountered so far with the smallest possible integer value
        int count = 0;
        // Initialize the count of chunks

        for (int i = 0; i < arr.size(); i++)
        {
            // Loop through the array
            maxVal = max(maxVal, arr[i]);
            // Update the maximum value encountered so far
            if (i == maxVal)
            {
                // If the current index is equal to the maximum value encountered so far
                count++;
                // Increment the count of chunks
            }
        }

        return count; // Return the count of chunks
    }
};
