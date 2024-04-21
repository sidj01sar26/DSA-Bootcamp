// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubarrays(vector<int> &nums, int k)
    {
        // Map to store cumulative sum counts
        unordered_map<int, int> m;
        // Initialize count of sum 0 as 1
        m[0] = 1;
        // Track if target value k is found
        int found = 0;
        // Final count of subarrays
        int ans = 0;
        // Cumulative sum
        int s = 0;

        // Iterate through the array
        for (int i : nums)
        {
            // If current element equals k, mark found as true
            if (i == k)
            {
                found = 1;
            }
            // Update cumulative sum
            else
            {
                s += i < k ? -1 : 1;
            }

            // If target k is found
            if (found)
            {
                // Add counts of (s-1) and s to answer
                ans += m[s - 1] + m[s];
            }
            // If not found, update cumulative sum count
            else
            {
                m[s]++;
            }
        }

        // Return final count of subarrays
        return ans;
    }
};