// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        long res = 0;                              // Initialize result
        bool minFound = false, maxFound = false;   // Track if minK and maxK are found
        int start = 0, minStart = 0, maxStart = 0; // Track start index for each range

        // Iterate through the array
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (num < minK || num > maxK)
            { // If num is outside the range, reset flags and start index
                minFound = false;
                maxFound = false;
                start = i + 1;
            }
            if (num == minK)
            { // If num equals minK, update minFound and minStart
                minFound = true;
                minStart = i;
            }
            if (num == maxK)
            { // If num equals maxK, update maxFound and maxStart
                maxFound = true;
                maxStart = i;
            }
            if (minFound && maxFound)
            { // If both minK and maxK are found, calculate subarray count
                res += (min(minStart, maxStart) - start + 1);
            }
        }

        return res; // Return result
    }
};