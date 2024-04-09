// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int partitionArray(vector<int> &nums, int k)
    {
        // Sort the input array
        sort(nums.begin(), nums.end());

        // Initialize the answer variable
        int ans = 0;

        // Initialize the index variable for traversing the array
        int i = 0;

        // Loop through the array
        while (i < nums.size())
        {
            // Initialize the index variable for the sub-array
            int j = i + 1;

            // Find the end of the sub-array that satisfies the condition
            while (j < nums.size() && nums[j] - nums[i] <= k)
            {
                j++;
            }

            // Increment the answer since we've found a partition
            ans++;

            // Move to the next partition
            i = j;
        }

        // Return the total number of partitions found
        return ans;
    }
};
