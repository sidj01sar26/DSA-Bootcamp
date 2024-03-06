// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> result; // Store the final result

        int rows = matrix.size();        // Number of rows in the matrix
        int cols = matrix[0].size();     // Number of columns in the matrix
        int totalElements = rows * cols; // Total number of elements in the matrix

        int top = 0;           // Index for the top row
        int right = cols - 1;  // Index for the rightmost column
        int bottom = rows - 1; // Index for the bottom row
        int left = 0;          // Index for the leftmost column

        int count = 0; // Counter to keep track of the number of elements added to result
        while (count < totalElements)
        { // Continue until all elements are processed

            // Traverse from left to right in the top row
            for (int i = top; i <= right && count < totalElements; i++)
            {
                result.push_back(matrix[top][i]);
                count++;
            }
            top++; // Move to the next row

            // Traverse from top to bottom in the rightmost column
            for (int i = top; i <= bottom && count < totalElements; i++)
            {
                result.push_back(matrix[i][right]);
                count++;
            }
            right--; // Move to the previous column

            // Traverse from right to left in the bottom row
            for (int i = right; i >= left && count < totalElements; i--)
            {
                result.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--; // Move to the previous row

            // Traverse from bottom to top in the leftmost column
            for (int i = bottom; i >= top && count < totalElements; i--)
            {
                result.push_back(matrix[i][left]);
                count++;
            }
            left++; // Move to the next column
        }
        return result; // Return the final result
    }
};