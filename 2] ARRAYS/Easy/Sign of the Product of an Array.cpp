// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        // Initialize a counter to keep track of negative numbers encountered
        int count = 0;

        // Iterate through the elements of the vector
        for (int i = 0; i < nums.size(); i++)
        {
            // If any element is zero, the product will be zero
            if (nums[i] == 0)
            {
                return 0;
                // Return 0 immediately
            }
            if (nums[i] < 0)
            {
                // If the element is negative, increment the counter
                count++;
            }
        }
        // If the count of negative numbers is even, return 1 (positive sign), otherwise return -1 (negative sign)
        if (count % 2 == 0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
};
