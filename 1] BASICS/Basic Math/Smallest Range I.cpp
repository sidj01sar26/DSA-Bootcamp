// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestRangeI(vector<int> &nums, int k)
    {
        // Initialize variables to store the maximum and minimum values in the array
        int maximum = nums[0]; // Initialize maximum with the first element
        int minimum = nums[0]; // Initialize minimum with the first element

        // Iterate through the array to find the maximum and minimum values
        for (int i = 0; i < nums.size(); i++)
        {
            maximum = max(maximum, nums[i]); // Update maximum if current element is greater
            minimum = min(minimum, nums[i]); // Update minimum if current element is smaller
        }

        // Calculate the smallest possible range after adding or subtracting k to each element
        // The smallest range would be the maximum difference between maximum and minimum reduced by 2*k
        // to account for adding or subtracting k to each element
        return max(0, maximum - minimum - 2 * k); // Ensure the result is non-negative
    }
};
