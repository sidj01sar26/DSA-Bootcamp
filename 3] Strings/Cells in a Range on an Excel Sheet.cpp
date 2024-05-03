// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> cellsInRange(string s)
    {
        // Initialize an empty vector to store the resulting cell coordinates
        vector<string> res;

        // Extract start and end columns and rows from the input string
        char startCol = s[0], endCol = s[3];
        char startRow = s[1], endRow = s[4];

        // Iterate over columns from startCol to endCol
        for (char c = startCol; c <= endCol; c++)
        {
            // Iterate over rows from startRow to endRow
            for (char r = startRow; r <= endRow; r++)
            {
                // Form the cell coordinate string and add it to the result vector
                res.push_back(string(1, c) + string(1, r));
            }
        }

        // Return the resulting vector of cell coordinates
        return res;
    }
};