// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        // Sorting the input vector
        sort(nums.begin(), nums.end());

        // Loop through each element in the sorted vector
        for (int i = 0; i < nums.size(); ++i)
        {
            int num = nums[i];

            // If the current number is equal to the original value
            if (original == num)
            {
                // Double the original value
                original *= 2;
            }
        }

        // Return the final value
        return original;
    }
};
