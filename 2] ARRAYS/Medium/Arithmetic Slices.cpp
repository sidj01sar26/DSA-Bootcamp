// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        int count = 0;
        // Initialize a count variable to keep track of the number of arithmetic slices found
        int totalSlices = 0;
        // Initialize a variable to store the total number of arithmetic slices

        // Loop through the array starting from the third element
        for (int i = 2; i < nums.size(); i++)
        {
            // Check if the current three elements form an arithmetic sequence
            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
            {
                count++;
                // If so, increment the count of slices found
                totalSlices += count;
                // Accumulate the count into the total number of slices
            }
            else
            {
                count = 0;
                // Reset the count if the current three elements do not form an arithmetic sequence
            }
        }

        return totalSlices; // Return the total number of arithmetic slices found
    }
};
