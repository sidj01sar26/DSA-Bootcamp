// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        // Initialize the maximum reachable position
        int maxVal = nums[0];
        // Get the size of the input array
        int n = nums.size();

        // Iterate through the array elements
        for (int i = 0; i < n - 1; i++)
        {
            // Update the maximum reachable position at each step
            maxVal = max(maxVal, nums[i]);

            // If the maximum reachable position becomes non-positive, return false
            if (maxVal <= 0)
            {
                return false;
            }

            // Move one step forward and reduce the maximum reachable position
            maxVal--;
        }

        // If the loop completes without returning false, it is possible to reach the end
        return true;
    }
};
