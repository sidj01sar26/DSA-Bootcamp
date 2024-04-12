// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        vector<int> ans; // Result vector

        // Map to store frequency of elements
        unordered_map<int, int> m;

        // Count frequencies of elements
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }

        // Check for lonely elements
        for (int i = 0; i < nums.size(); i++)
        {
            // If frequency is 1 and no adjacent elements present
            if (m[nums[i]] == 1 && m.find(nums[i] - 1) == m.end() &&
                m.find(nums[i] + 1) == m.end())
            {
                ans.push_back(nums[i]); // Add to result
            }
        }
        return ans; // Return result
    }
};
