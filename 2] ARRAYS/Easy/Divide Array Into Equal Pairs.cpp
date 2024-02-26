// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        // Sorting the array to group equal elements together.
        sort(nums.begin(), nums.end());

        // Iterating through the sorted array by skipping two indices at a time.
        for (int i = 0; i < nums.size(); i += 2)
        {
            // Checking if the current element and the next element are not equal.
            if (nums[i] != nums[i + 1])
            {
                // If not equal, it's not possible to form pairs with equal elements.
                return false;
            }
        }
        // If all pairs have equal elements, return true.
        return true;
    }
};
