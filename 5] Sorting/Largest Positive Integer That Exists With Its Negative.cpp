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
        // Initialize pointers low and high
        int low = 0, high = nums.size() - 1;

        // Iterate until low is less than high
        while (low < high)
        {
            // If sum of elements at low and high index is zero
            if ((nums[low] + nums[high]) == 0)
            {
                // Return the maximum of nums[high] and its negative value
                return max(nums[high], -nums[low]);
            }
            // If sum is less than zero, move low pointer to right
            else if ((nums[low] + nums[high]) < 0)
            {
                low++;
            }
            // If sum is greater than zero, move high pointer to left
            else
            {
                high--;
            }
        }
        // Return -1 if no such k exists
        return -1;
    }
};