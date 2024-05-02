// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        // Merge adjacent equal elements by doubling the first and setting the second to zero
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        // Rearrange the elements to move all non-zero elements to the front
        int nextNonZero = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            // If the current element is non-zero, move it to the nextNonZero index
            if (nums[i] != 0)
            {
                swap(nums[nextNonZero++], nums[i]);
            }
        }

        // Return the modified vector
        return nums;
    }
};