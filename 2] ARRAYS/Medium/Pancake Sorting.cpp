// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> pancakeSort(vector<int> &arr)
    {
        int n = arr.size(); // Get the size of the array
        vector<int> res;    // Initialize a vector to store the result of pancake sorting

        while (n > 0)
        {
            // Loop until the size of the array becomes 0
            int max = 0;
            // Initialize max index to 0

            // Find the index of the maximum element in the remaining unsorted portion of the array
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > arr[max])
                {
                    max = i;
                }
            }

            int target = arr[max]; // Get the value of the maximum element
            int pos = max;         // Store the index of the maximum element

            // Perform pancake flipping to move the maximum element to the end of the array
            while (arr[n - 1] != target)
            {
                res.push_back(pos + 1);
                // Store the position (index + 1) where flipping is performed
                reverse(arr.begin(), arr.begin() + pos + 1);
                // Flip the sub-array from the beginning up to the maximum element
                pos = 0;
                // Reset the position to the beginning of the array for the next flipping
                res.push_back(n);
                // Store the position (size of the remaining array) for flipping the entire array
                reverse(arr.begin(), arr.begin() + n);
                // Flip the entire remaining array
            }
            n--; // Reduce the size of the remaining array as the maximum element is sorted
        }

        return res; // Return the result vector containing the flipping steps
    }
};
