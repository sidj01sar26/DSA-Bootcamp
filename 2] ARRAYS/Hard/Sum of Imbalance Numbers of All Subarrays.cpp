// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumImbalanceNumbers(vector<int> &nums)
    {
        int result = 0;
        // Initialize result
        int n = nums.size();
        // Get size of nums
        for (int i = 0; i < n; i++)
        {
            // Iterate through nums
            unordered_set<int> seen;
            // Track seen numbers in the current subarray
            int imbalance = -1;
            // Initialize imbalance counter
            for (int j = i; j < n; j++)
            { // Iterate from i to end of nums
                if (seen.insert(nums[j]).second)
                {
                    // If nums[j] is newly seen
                    imbalance++;
                    // Increment imbalance
                    imbalance -= seen.count(nums[j] + 1) + seen.count(nums[j] - 1);
                    // Adjust imbalance
                }
                result += imbalance; // Add current imbalance to result
            }
        }
        return result; // Return result
    }
};