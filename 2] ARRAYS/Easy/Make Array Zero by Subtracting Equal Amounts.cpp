// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        set<int> s; // Create a set to store unique non-zero elements

        // Iterate through the nums array
        for (int i = 0; i < nums.size(); i++)
        {
            // If the current element is not zero, insert it into the set
            if (nums[i] != 0)
            {
                s.insert(nums[i]);
            }
        }

        // Return the size of the set, which represents the number of unique non-zero elements
        return s.size();
    }
};
