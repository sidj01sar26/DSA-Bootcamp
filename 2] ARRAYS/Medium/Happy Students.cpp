// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countWays(vector<int> &nums)
    {
        // Sort the input vector
        sort(nums.begin(), nums.end());

        int ans = 0;         // Store the count of ways
        int n = nums.size(); // Size of the input vector
        int selected = 0;    // Variable to keep track of selected elements

        // If the smallest element is not 0, there is 1 way
        if (nums[0] != 0)
            ans = 1;

        // Iterate through the sorted vector
        for (int i = 0; i < n; i++)
        {
            selected++; // Increment selected count

            // If the number of selected elements is greater than the current number
            if (selected > nums[i] && (i + 1 == n || selected < nums[i + 1]))
            {
                ans++; // Increment the count of ways
            }
        }
        return ans; // Return the total count of ways
    }
};
