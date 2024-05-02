// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the minimum sum satisfying the condition
    int minimumSum(vector<int> &nums)
    {
        int n = nums.size();
        // Arrays to store the minimum elements on the left and right of each element
        vector<int> l(n), r(n);

        // Initialize the left and right arrays
        l[0] = nums[0];
        r[n - 1] = nums[n - 1];

        // Fill the left array with minimum elements to the left of each element
        for (int i = 1; i < n; i++)
        {
            l[i] = min(l[i - 1], nums[i]);
        }

        // Fill the right array with minimum elements to the right of each element
        for (int i = n - 2; i >= 0; i--)
        {
            r[i] = min(r[i + 1], nums[i]);
        }

        // Initialize the minimum sum
        int mn = INT_MAX;

        // Iterate through each element except the first and last
        for (int i = 1; i < n - 1; i++)
        {
            // Check if the element satisfies the condition
            if (l[i] < nums[i] && r[i] < nums[i])
            {
                // Update the minimum sum
                mn = min(mn, l[i] + nums[i] + r[i]);
            }
        }

        // If no valid sum is found, return -1, otherwise return the minimum sum
        return (mn == INT_MAX) ? -1 : mn;
    }
};