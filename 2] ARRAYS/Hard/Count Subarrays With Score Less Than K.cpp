// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countSubarrays(vector<int> &nums, long long k)
    {
        int n = nums.size(); // Get the size of the array
        long long count = 0; // Initialize the count of valid subarrays
        int j = 0;           // Initialize the starting index of the sliding window
        long long sum = 0;   // Initialize the sum of the current sliding window

        // Iterate through the array with the ending index of the sliding window
        for (int i = 0; i < n; i++)
        {
            sum += nums[i]; // Add the current element to the sum

            // Adjust the starting index of the sliding window to maintain the condition
            while ((sum * (i - j + 1)) >= k)
            {
                sum -= nums[j]; // Remove the element at the starting index from the sum
                j++;            // Move the starting index to the right
            }

            // Add the number of valid subarrays ending at index i
            count += (i - j + 1);
        }

        return count; // Return the total count of valid subarrays
    }
};
