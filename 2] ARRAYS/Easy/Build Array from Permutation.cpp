// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        // Create a vector to store the result
        vector<int> ans;

        // Loop through each element of nums
        for (int i = 0; i < nums.size(); i++)
        {
            // Push the element at index nums[i] into ans
            // This retrieves the element which is the value at nums[i]
            ans.push_back(nums[nums[i]]);
        }

        // Return the resulting vector
        return ans;
    }
};
