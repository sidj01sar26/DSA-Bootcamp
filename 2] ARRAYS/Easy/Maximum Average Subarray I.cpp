// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        // Initialize a variable to store the current sum of the first 'k' elements
        double currSum = 0;

        // Calculate the sum of the first 'k' elements
        for (int i = 0; i < k; i++)
        {
            currSum += nums[i];
        }

        // Store the current sum as the maximum sum initially
        double maxSum = currSum;

        // Slide a window of size 'k' over the array and calculate the sum of each window
        for (int i = k; i < nums.size(); i++)
        {
            // Add the next element to the current sum and subtract the element which is 'k' steps behind
            currSum += nums[i] - nums[i - k];
            // Update the maximum sum if the current sum is greater
            maxSum = max(maxSum, currSum);
        }

        // Return the maximum average by dividing the maximum sum by 'k'
        return maxSum / k;
    }
};