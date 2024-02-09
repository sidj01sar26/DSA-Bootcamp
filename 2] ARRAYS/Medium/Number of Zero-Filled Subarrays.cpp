// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count the number of zero-filled subarrays
    long zeroFilledSubarray(vector<int> &nums)
    {
        // Initialize count to store the total count of zero-filled subarrays
        // Initialize zeroEnd to keep track of the length of the current zero-filled subarray
        long count = 0, zeroEnd = 0;

        // Loop through each element of the nums vector
        for (int i = 0; i < nums.size(); i++)
        {
            // Retrieve the current element from nums
            int num = nums[i];
            // If the current element is zero, increment zeroEnd and add it to count
            if (num == 0)
            {
                count += ++zeroEnd;
            }
            else
            {
                // If the current element is not zero, reset zeroEnd to zero
                zeroEnd = 0;
            }
        }

        // Return the total count of zero-filled subarrays
        return count;
    }
};