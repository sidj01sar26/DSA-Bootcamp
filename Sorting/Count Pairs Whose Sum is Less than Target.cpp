// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairs(vector<int> &nums, int target)
    {
        // Sort the array for easier pair manipulation
        sort(nums.begin(), nums.end());

        // Initialize counter for pairs
        int count = 0;

        // Two pointers approach
        int left = 0;                // Pointer to start of array
        int right = nums.size() - 1; // Pointer to end of array

        // Iterate until left pointer crosses right pointer
        while (left < right)
        {
            // If sum of elements at left and right pointers is less than target
            if (nums[left] + nums[right] < target)
            {
                // Increment count by number of pairs between left and right pointers
                count += right - left;
                // Move left pointer to the right to find larger elements
                left++;
            }
            else
            {
                // If sum is not less than target, move right pointer to left to find smaller elements
                right--;
            }
        }

        // Return count of pairs found
        return count;
    }
};
