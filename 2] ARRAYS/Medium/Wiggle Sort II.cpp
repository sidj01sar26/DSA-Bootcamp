// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        vector<int> temp = nums;        // Create a copy of the original array
        sort(temp.begin(), temp.end()); // Sort the copy

        int i = (temp.size() - 1) / 2; // Middle index (end of the first half)
        int j = temp.size() - 1;       // Last index (end of the second half)
        int k = 0;                     // Index for iterating over the original array

        // Rebuild the original array with the wiggle sort pattern
        while (k < nums.size())
        {
            if (k & 1)
            {                          // For odd indices
                nums[k++] = temp[j--]; // Assign from the end of the sorted array
            }
            else
            {                          // For even indices
                nums[k++] = temp[i--]; // Assign from the middle of the sorted array
            }
        }
    }
};