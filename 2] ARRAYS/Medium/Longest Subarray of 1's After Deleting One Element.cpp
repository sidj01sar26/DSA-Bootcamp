// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int left = 0, right = 0;
        // Initialize two pointers for the sliding window
        int maxLen = 0, countZeros = 0;
        // Variables to store the maximum length of subarray and count of zeros

        for (right = 0; right < nums.size(); right++)
        {
            // Loop through the array
            if (nums[right] == 0)
            {
                // If the current number is zero
                countZeros++;
                // Increment the count of zeros
                while (countZeros > 1)
                {
                    // If there are more than one zero in the current window
                    if (nums[left] == 0)
                    {
                        // Move the left pointer until there is only one zero in the window
                        countZeros--;
                        // Decrement the count of zeros
                    }
                    left++;
                    // Move the left pointer
                }
            }
            maxLen = max(maxLen, right - left); // Update the maximum length of subarray
        }
        return maxLen; // Return the maximum length of subarray
    }
};