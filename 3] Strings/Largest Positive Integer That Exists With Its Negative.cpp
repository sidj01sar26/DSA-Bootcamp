// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        // Sort the array in ascending order
        sort(nums.begin(), nums.end());

        // Initialize two pointers, low and high
        int low = 0, high = nums.size() - 1;

        // Iterate until low is less than high
        while (low < high)
        {
            // Check if the sum of elements at low and high is zero
            if ((nums[low] + nums[high]) == 0)
            {
                // Return the larger of nums[high] and the absolute value of nums[low]
                return max(nums[high], -nums[low]);
            }
            else if ((nums[low] + nums[high]) < 0)
            {
                // If the sum is negative, move low pointer to the right
                low++;
            }
            else
            {
                // If the sum is positive, move high pointer to the left
                high--;
            }
        }

        // If no such integer is found, return -1
        return -1;
    }
};
