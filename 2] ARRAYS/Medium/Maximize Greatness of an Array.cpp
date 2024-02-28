// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximizeGreatness(vector<int> &nums)
    {
        // Sort the numbers in non-decreasing order
        sort(nums.begin(), nums.end());

        // Initialize count to keep track of greatness
        int count = 0;

        // Iterate through the sorted numbers
        for (int i = 0, j = 0; j < nums.size(); j++)
        {
            // If the current number is greater than the previous number,
            // increment the count of greatness and move to the next index
            if (nums[i] < nums[j])
            {
                count++;
                i++;
            }
        }

        // Return the count of greatness
        return count;
    }
};
