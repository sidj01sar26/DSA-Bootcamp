// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int matrixSum(vector<vector<int>> &nums)
    {
        int ans = 0; // Initialize the variable to store the final sum

        // Sort each row of the matrix
        for (int i = 0; i < nums.size(); i++)
        {
            sort(nums[i].begin(), nums[i].end());
        }

        // Iterate through each column of the matrix
        for (int col = 0; col < nums[0].size(); col++)
        {
            int maxCol = 0; // Variable to store the maximum value in the current column

            // Iterate through each row of the matrix
            for (int row = 0; row < nums.size(); row++)
            {
                // Update maxCol with the maximum value encountered in the current column
                maxCol = max(maxCol, nums[row][col]);
            }
            
            // Add the maximum value of the current column to the final sum
            ans += maxCol;
        }

        return ans; // Return the final sum
    }
};
