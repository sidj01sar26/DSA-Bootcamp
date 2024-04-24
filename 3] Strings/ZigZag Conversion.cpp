// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
        {
            return s; // If numRows is 1, the string remains unchanged
        }

        vector<string> zigzag(numRows); // Create a vector of strings to hold characters in each row
        int i = 0;                      // Initialize the index to traverse the input string
        int row = 0;                    // Initialize the row index
        bool direction = 1;             // Flag to indicate the direction of traversal (top to bottom or bottom to top)

        // Traverse the string and populate the zigzag pattern
        while (true)
        {
            if (direction) // If direction is true, traverse from top to bottom
            {
                while (row < numRows && i < s.size()) // Traverse downwards until reaching the last row or end of string
                {
                    zigzag[row].push_back(s[i++]); // Add character to the current row and move to the next character
                    row++;                         // Move to the next row
                }
                row = numRows - 2; // Adjust row index for the next direction (diagonal traversal)
            }
            else // If direction is false, traverse from bottom to top
            {
                while (row >= 0 && i < s.size()) // Traverse upwards until reaching the first row or end of string
                {
                    zigzag[row].push_back(s[i++]); // Add character to the current row and move to the next character
                    row--;                         // Move to the previous row
                }
                row = 1; // Adjust row index for the next direction (diagonal traversal)
            }
            if (i >= s.size()) // If all characters are traversed, break the loop
            {
                break;
            }
            direction = !direction; // Change direction for the next traversal
        }

        // Concatenate characters from each row to form the final answer
        string answer = "";
        for (int i = 0; i < zigzag.size(); i++)
        {
            answer = answer + zigzag[i];
        }
        return answer; // Return the zigzag pattern as a string
    }
};
