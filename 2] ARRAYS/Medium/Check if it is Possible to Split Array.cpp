// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canSplitArray(vector<int> &nums, int m)
    {
        // If the array has 2 or fewer elements, it can always be split into m subarrays
        if (nums.size() <= 2)
            return true;

        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); i++)
        {
            // Check if the sum of the current element and the previous one is greater than or equal to m
            if (nums[i] + nums[i - 1] >= m)
                return true;
        }

        // If no adjacent pair has a sum greater than or equal to m, return false
        return false;
    }
};
