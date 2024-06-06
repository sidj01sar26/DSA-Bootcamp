// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfGoodSubarraySplits(vector<int> &nums)
    {
        long long ans = 1;          // Initialize the answer to 1
        const int MOD = 1000000007; // Define the modulus value
        int count = 0;              // Initialize the count of zeros between 1s

        // Initialize index i to start from the beginning of the array
        int i = 0;
        // Skip leading zeros
        while (i < nums.size() && nums[i] == 0)
        {
            i++;
        }

        // If the entire array consists of zeros, return 0
        if (i >= nums.size())
        {
            return 0;
        }

        // Iterate through the rest of the array
        while (i < nums.size())
        {
            if (nums[i] == 1)
            {
                // If a 1 is encountered, update the answer
                ans = (ans * (count + 1)) % MOD;
                count = 0; // Reset the count of zeros
            }
            else
            {
                count++; // Increment the count of zeros
            }
            i++;
        }

        return ans; // Return the final answer
    }
};