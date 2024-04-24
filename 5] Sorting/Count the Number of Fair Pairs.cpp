// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count pairs in nums that sum up to a value between lower and upper (inclusive)
    long long countFairPairs(vector<int> &nums, int lower, int upper)
    {
        int n = nums.size();            // Size of nums array
        long ans = 0;                   // Counter for fair pairs
        sort(nums.begin(), nums.end()); // Sort the array for binary search

        // Loop through the array
        for (int i = 0; i < n - 1; i++)
        {
            // Calculate the range of values that can form fair pairs with nums[i]
            int x = lower - nums[i], y = upper - nums[i];

            // Find the first element greater than or equal to x
            auto it = lower_bound(nums.begin() + i + 1, nums.end(), x);

            // Find the first element strictly greater than y
            auto gt = upper_bound(nums.begin() + i + 1, nums.end(), y);

            // Increment ans by the number of elements in range [it, gt)
            ans += gt - it;
        }

        // Return the total count of fair pairs
        return ans;
    }
};
