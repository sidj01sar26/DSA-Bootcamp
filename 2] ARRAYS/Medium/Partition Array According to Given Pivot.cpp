// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> ans(nums.size()); // Initialize a vector to store the result
        int i = 0;                    // Initialize an index for filling the result vector

        // Iterate through the array and move elements smaller than the pivot to the beginning
        for (int n : nums)
        {
            if (n < pivot)
                ans[i++] = n;
        }

        // Iterate through the array and move elements equal to the pivot to the middle
        for (int n : nums)
        {
            if (n == pivot)
                ans[i++] = n;
        }

        // Iterate through the array and move elements larger than the pivot to the end
        for (int n : nums)
        {
            if (n > pivot)
                ans[i++] = n;
        }

        return ans; // Return the pivoted array
    }
};