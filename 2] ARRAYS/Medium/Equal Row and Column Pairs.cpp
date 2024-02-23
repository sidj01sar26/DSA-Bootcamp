// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int n = grid.size(); // Get the size of the grid (assuming it's a square grid)
        int count = 0;       // Initialize a counter for equal pairs

        // Loop through each cell in the grid
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                bool equal = true; // Assume initially all elements are equal

                // Compare the elements of the current row (i) with the elements of the current column (j)
                for (int k = 0; k < n; k++)
                {
                    if (grid[i][k] != grid[k][j])
                    {
                        // If any pair of elements is not equal
                        equal = false;
                        // Mark the pair as not equal
                        break;
                        // No need to continue checking, move to the next pair
                    }
                }

                // If all elements in the row and column are equal
                if (equal)
                {
                    count++; // Increment the count of equal pairs
                }
            }
        }
        return count; // Return the total count of equal pairs found
    }
};
