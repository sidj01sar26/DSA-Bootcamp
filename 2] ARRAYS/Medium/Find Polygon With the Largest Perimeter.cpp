// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {
        // Sort the input vector
        sort(nums.begin(), nums.end());

        // Calculate the sum of all elements in the vector
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        // Check for the largest possible perimeter starting from the largest elements
        for (int i = nums.size() - 1; i >= 2; i--)
        {
            // Exclude the current largest element from the sum
            sum -= nums[i];
            // Check if the remaining sum is greater than the current element
            if (sum > nums[i])
            {
                // If so, return the sum of the remaining elements plus the current element
                return sum + nums[i];
            }
        }

        // If no valid triangle is found, return -1
        return -1;
    }
};
