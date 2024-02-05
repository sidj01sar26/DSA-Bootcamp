// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        // Looping through the vector starting from the second element.
        for (int i = 1; i < nums.size(); i++)
        {
            // Adding the current element with the previous element.
            nums[i] += nums[i - 1];
        }
        // Returning the modified vector containing running sum.
        return nums;
    }
};