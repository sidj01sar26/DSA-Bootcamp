// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int perimeter = 0;         // Initialize perimeter variable
        int rows = grid.size();    // Get number of rows in the grid
        int cols = grid[0].size(); // Get number of columns in the grid

        // Loop through each cell in the grid
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == 1)
                {                   // Check if the cell is land
                    perimeter += 4; // Increment perimeter by 4 for each land cell

                    // Check adjacent cells to see if they are also land
                    // If they are, decrement the perimeter as they share a side
                    if (i > 0 && grid[i - 1][j] == 1)
                        perimeter--;
                    if (i < rows - 1 && grid[i + 1][j] == 1)
                        perimeter--;
                    if (j > 0 && grid[i][j - 1] == 1)
                        perimeter--;
                    if (j < cols - 1 && grid[i][j + 1] == 1)
                        perimeter--;
                }
            }
        }

        return perimeter; // Return the calculated perimeter
    }
};
