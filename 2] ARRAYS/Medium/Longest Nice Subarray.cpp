// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestNiceSubarray(vector<int> &nums)
    {
        int l = 0, n = nums.size(), x = 0, ans = 0; 
        // Initialize variables
        for (int r = 0; r < n; r++)
        { 
            // Loop through nums
            while ((x & nums[r]) != 0)
            {                   
                // Check if a nice subarray exists
                x ^= nums[l++]; 
                // Remove elements until a nice subarray is found
            }
            ans = max(ans, r - l + 1); 
            // Update answer
            x |= nums[r];              
            // Include current element in subarray
        }
        return ans; // Return the length of the longest nice subarray
    }
};