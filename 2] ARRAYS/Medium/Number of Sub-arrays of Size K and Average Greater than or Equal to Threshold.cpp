// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numOfSubarrays(vector<int> &arr, int k, int threshold)
    {
        // Calculate the target sum based on the given 'k' and 'threshold'
        int targetSum = k * threshold;
        // Initialize a variable to store the sum of the current window
        int currentSum = 0;
        // Initialize a variable to count the number of subarrays satisfying the condition
        int count = 0;

        // Calculate the sum of the first 'k' elements
        for (int i = 0; i < k; i++)
        {
            currentSum += arr[i];
        }
        // Check if the sum of the first window meets the target sum
        if (currentSum >= targetSum)
        {
            count++;
        }

        // Slide a window of size 'k' over the array and check each window
        for (int i = k; i < arr.size(); i++)
        {
            // Add the next element to the current sum and subtract the element which is 'k' steps behind
            currentSum += arr[i] - arr[i - k];
            // Check if the current window sum meets the target sum
            if (currentSum >= targetSum)
            {
                count++;
            }
        }

        // Return the count of subarrays satisfying the condition
        return count;
    }
};