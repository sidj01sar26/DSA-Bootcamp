// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int left = 0;        // Pointer for the left end of the current subarray
        int right = 0;       // Pointer for the right end of the current subarray
        int n = nums.size(); // Size of the input vector
        int sum = 0;         // Sum of elements in the current subarray
        int len = INT_MAX;   // Length of the minimum subarray satisfying the condition

        // Loop until the right pointer reaches the end of the array
        while (right < n)
        {
            // Add the element at the right pointer to the sum and move the pointer
            sum += nums[right++];

            // If the sum is greater than or equal to the target
            while (sum >= target)
            {
                // Update the minimum length if needed
                len = min(len, right - left);
                // Subtract the element at the left pointer from the sum and move the pointer
                sum -= nums[left++];
            }
        }

        // If no subarray found satisfying the condition
        if (len == INT_MAX)
        {
            return 0; // Return 0
        }
        else
        {
            return len; // Return the length of the minimum subarray
        }
    }
};
