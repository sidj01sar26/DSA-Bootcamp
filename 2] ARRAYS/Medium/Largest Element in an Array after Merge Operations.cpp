// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxArrayValue(vector<int> &nums)
    {
        // Initialize sum to keep track of the current sum
        long long sum = 0;
        // Get the size of the input vector
        int n = nums.size();

        // Traverse the vector from right to left
        for (int i = n - 1; i >= 0; i--)
        {
            // If the current element is less than or equal to the current sum
            if (nums[i] <= sum)
            {
                // Add the current element to the sum
                sum += nums[i];
            }
            else
            {
                // If the current element is greater than the current sum,
                // update the sum to be the current element
                sum = nums[i];
            }
        }

        // Return the maximum possible sum obtained
        return sum;
    }
};
