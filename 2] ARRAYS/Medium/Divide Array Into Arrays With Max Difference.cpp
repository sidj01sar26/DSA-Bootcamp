// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {
        vector<vector<int>> ans;
        // Sort the numbers in ascending order
        sort(nums.begin(), nums.end());

        // Iterate over the sorted numbers in increments of 3
        for (int i = 2; i < nums.size(); i += 3)
        {
            // Check if the difference between the third and first number in the triplet is greater than k
            if (nums[i] - nums[i - 2] > k)
            {
                return {}; // If so, return an empty vector
            }

            // If not, add the triplet to the answer
            ans.push_back({nums[i - 2], nums[i - 1], nums[i]});
        }

        return ans; // Return the answer
    }
};