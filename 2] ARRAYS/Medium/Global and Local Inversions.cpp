// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIdealPermutation(vector<int> &nums)
    {
        // Iterate through each element in the array
        for (int i = 0; i < nums.size(); i++)
        {
            // Check if the absolute difference between current index and the value at that index is more than 1
            // If the difference is more than 1, it means the permutation is not ideal
            if (i - nums[i] > 1 || i - nums[i] < -1)
            {
                return false; // Return false if the condition is met
            }
        }
        // If no element violates the condition, return true
        return true;
    }
};