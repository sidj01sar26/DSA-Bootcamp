// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // Start from the top-right corner of the matrix
        int row = 0;                    // Initialize row index to 0
        int col = matrix[0].size() - 1; // Initialize column index to the last column

        // Iterate until we reach the bottom-left corner of the matrix
        while (row < matrix.size() && col >= 0)
        {
            // If the current element is equal to the target, return true
            if (matrix[row][col] == target)
            {
                return true;
            }
            // If the current element is less than the target, move to the next row
            if (matrix[row][col] < target)
            {
                row++;
            }
            // If the current element is greater than the target, move to the previous column
            else
            {
                col--;
            }
        }

        // If the target is not found in the matrix, return false
        return false;
    }
};