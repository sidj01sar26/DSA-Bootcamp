// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int left = 0;      // Initialize the left pointer of the window
        int right = 0;     // Initialize the right pointer of the window
        int zeroCount = 0; // Initialize the count of zeros in the current window

        // Loop until the right pointer reaches the end of the array
        while (right < nums.size())
        {
            // If the element at the right pointer is 0, increment zeroCount
            if (nums[right] == 0)
            {
                zeroCount++;
            }

            // If the number of zeros in the current window exceeds k
            if (zeroCount > k)
            {
                // Move the left pointer to shrink the window until it becomes valid again
                if (nums[left] == 0)
                {
                    zeroCount--; // Decrement zeroCount as the leftmost zero is no longer in the window
                }
                left++; // Move the left pointer to the right
            }
            right++; // Move the right pointer to the right
        }

        // Return the length of the longest subarray with at most k zeros
        return right - left;
    }
};