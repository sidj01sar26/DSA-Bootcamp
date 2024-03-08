// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canBeIncreasing(vector<int> &nums)
    {
        bool removed = false; // Flag to indicate if an element has been removed
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] >= nums[i])
            {
                // If current element is not greater than the previous one
                if (removed)
                {
                    // If an element has already been removed
                    return false;
                    // It's not possible to make the array strictly increasing by removing just one element
                }

                removed = true; // Mark that an element has been removed
                
                if (i > 1 && nums[i] <= nums[i - 2])
                {
                    // If the current element is less than or equal to the element two steps behind
                    nums[i] = nums[i - 1];
                    // Modify the current element to make it strictly increasing
                }
            }
        }
        return true;
        // If no issues are encountered, the array can be made strictly increasing
    }
};
