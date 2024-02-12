// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to calculate maximum amount of money that can be robbed
    int rob(vector<int> &nums)
    {
        // If there are fewer than 2 houses
        if (nums.size() < 2)
        {
            // If there are no houses, return 0
            if (nums.empty())
            {
                return 0;
            }
            else
            { // If there is only one house, return the money in that house
                return nums[0];
            }
        }
        
        // Return the maximum amount of money robbed from two possible scenarios:
        // 1. Robbing from the first house to the second last house
        // 2. Robbing from the second house to the last house
        return max(robber(nums, 0, nums.size() - 2), robber(nums, 1, nums.size() - 1));
    }

private:
    // Helper function to calculate maximum amount of money that can be robbed
    int robber(vector<int> &nums, int start, int end)
    {
        int prev = 0, current = 0; 
        // Initialize variables to track previous and current maximum amount robbed

        // Iterate through the houses from start to end
        for (int i = start; i <= end; i++)
        {
            // Calculate the maximum amount that can be robbed at the current house
            int temp = max(prev + nums[i], current);

            // Update prev to current, and current to the maximum amount just calculated
            prev = current;
            current = temp;
        }

        // Return the maximum amount of money robbed
        return current;
    }
};
