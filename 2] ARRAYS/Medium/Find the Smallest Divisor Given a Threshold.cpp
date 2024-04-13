// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        // Initialize left, right, and answer variables
        int l = 1, r = 1000001, ans = 0;

        // Binary search loop
        while (l <= r)
        {
            // Calculate the middle point
            int mid = (l + r) / 2;
            // Initialize the sum of divisions
            long long sum = 0;

            // Calculate the sum of divisions for each number in the array
            for (int i = 0; i < nums.size(); i++)
            {
                // Divide each number by the current divisor and sum up the result
                sum += (nums[i] + mid - 1) / mid; // Equivalent to ceil(nums[i] / mid)
            }

            // If the sum exceeds the threshold, move left pointer to the right
            if (sum > threshold)
            {
                l = mid + 1;
            }
            // If the sum is less than or equal to the threshold, update answer and move right pointer to the left
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }

        // Return the answer
        return ans;
    }
};
