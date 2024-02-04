// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isGood(vector<int> &nums)
    {
        // Get the size of the vector
        int n = nums.size();

        // Sort the numbers in ascending order
        sort(nums.begin(), nums.end());

        // Check if each number is consecutive starting from 1
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] != i + 1)
            {
                // If the current number is not i+1, it's not good
                return false;
            }
        }

        // Check if the last number is equal to the size of the vector - 1
        if (nums[n - 1] != (n - 1))
        {
            // If the last number is not equal to n-1, it's not good
            return false;
        }

        // If all conditions are met, the vector is good
        return true;
    }
};
