// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        int n = grid.size();    // Get the number of rows in the grid
        int m = grid[0].size(); // Get the number of columns in the grid

        vector<vector<int>> ans; // Initialize the result vector

        for (int i = 0; i < n - 2; i++)
        {
            // Iterate through rows until the third last row
            vector<int> temp;
            // Create a temporary vector to store local maximums in a row
            for (int j = 0; j < m - 2; j++)
            {
                // Iterate through columns until the third last column
                // Find the maximum value in the 3x3 local window
                temp.push_back(max({grid[i][j], grid[i][j + 1], grid[i][j + 2],
                                    grid[i + 1][j], grid[i + 1][j + 1], grid[i + 1][j + 2], grid[i + 2][j], grid[i + 2][j + 1], grid[i + 2][j + 2]}));
            }
            ans.push_back(temp); // Add the row of local maximums to the result vector
        }

        return ans; // Return the result vector
    }
};

// or

class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        int n = grid.size();                                
        // Get the size of the grid
        vector<vector<int>> res(n - 2, vector<int>(n - 2)); 
        // Initialize the result vector

        for (int i = 1; i < n - 1; ++i)
        { 
            // Iterate through rows excluding the border rows
            for (int j = 1; j < n - 1; ++j)
            {                          
                // Iterate through columns excluding the border columns
                int temp = grid[i][j]; 
                // Initialize the local maximum with the current cell value

                // Iterate through the 3x3 local window around the current cell
                for (int k = i - 1; k <= i + 1; ++k)
                {
                    for (int l = j - 1; l <= j + 1; ++l)
                    {
                        temp = max(temp, grid[k][l]); // Update the local maximum
                    }
                }

                res[i - 1][j - 1] = temp; 
                // Store the local maximum in the result vector
            }
        }

        return res; // Return the result vector
    }
};
