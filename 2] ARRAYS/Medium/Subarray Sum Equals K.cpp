// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        // Create a hashmap to store the frequency of seen sums.
        unordered_map<int, int> seen = {{0, 1}}; // Initialize with sum 0 seen once.
        int count = 0;                           // Counter for the number of subarrays found.
        int sum = 0;                             // Running sum of elements in the subarray.

        // Iterate through the array.
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];         // Add current element to the running sum.
            count += seen[sum - k]; // Check if there exists a previous sum such that sum - previous_sum = k.
            seen[sum]++;            // Increment the frequency of the current sum.
        }
        return count; // Return the total count of subarrays.
    }
};