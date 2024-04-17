// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to merge overlapping intervals
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        // Sorting intervals based on the start value
        sort(intervals.begin(), intervals.end());

        // Vector to store merged intervals
        vector<vector<int>> merged;

        // Iterating through each interval
        for (const auto &interval : intervals)
        {
            // If the merged vector is empty or the end of the last merged interval is less than the start of the current interval
            if (merged.empty() || merged.back()[1] < interval[0])
            {
                // Add the current interval to the merged vector
                merged.push_back(interval);
            }
            else
            {
                // Merge the current interval with the last merged interval
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        // Return the merged intervals
        return merged;
    }
};