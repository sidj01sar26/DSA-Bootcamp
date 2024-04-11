// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestSumAfterKNegations(vector<int> &nums, int k)
    {
        // Sort the array in ascending order
        sort(begin(nums), end(nums));

        int sum = 0;
        // Continue until we have performed all k negations
        while (k > 0)
        {
            // Negate the smallest element
            nums[0] = -nums[0];
            // Resort the array to maintain order after negation
            sort(begin(nums), end(nums));
            // Decrease the count of remaining negations
            k--;
        }

        // Calculate the sum of elements in the modified array
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        // Return the sum
        return sum;
    }
};
