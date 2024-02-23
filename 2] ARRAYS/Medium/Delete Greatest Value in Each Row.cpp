// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        int ans = 0;
        // Initialize the sum of remaining values

        // Sort each row in the grid in ascending order
        for (int i = 0; i < grid.size(); i++)
        {
            sort(grid[i].begin(), grid[i].end());
        }
        // Iterate through each column
        for (int i = 0; i < grid[0].size(); i++)
        {
            int maxVal = 0;
            // Initialize the maximum value in the current column

            // Iterate through each row to find the maximum value in the current column
            for (int j = 0; j < grid.size(); j++)
            {
                maxVal = max(maxVal, grid[j][i]);
            }
            // Add the maximum value of the current column to the sum
            ans += maxVal;
        }
        // Return the sum of remaining values after deleting the greatest value in each column
        return ans;
    }
};
