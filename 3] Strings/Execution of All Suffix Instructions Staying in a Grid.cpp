// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if the given coordinates (row, col) are valid within the grid of size n x n
    bool isValid(int row, int col, int n)
    {
        return (row >= 0 && row < n && col >= 0 && col < n);
    }

    // Function to execute instructions and return the number of valid moves at each step
    vector<int> executeInstructions(int n, vector<int> &startPos, string s)
    {
        // Initialize the vector to store the number of valid moves at each step
        vector<int> ans;
        // Initialize starting row and column positions
        int row = startPos[0];
        int col = startPos[1];
        // Get the length of the instruction string
        int len = s.size();

        // Loop through each instruction
        for (int i = 0; i < len; i++)
        {
            // Initialize current row, column, and count of valid moves
            int currRow = row;
            int currCol = col;
            int currAns = 0;

            // Iterate through the instructions starting from index i
            for (int j = i; j < len; j++)
            {
                // Update current row and column based on the instruction
                if (s[j] == 'R')
                {
                    currCol++;
                }
                else if (s[j] == 'L')
                {
                    currCol--;
                }
                else if (s[j] == 'U')
                {
                    currRow--;
                }
                else
                {
                    currRow++;
                }

                // Increment count if the new position is valid
                if (isValid(currRow, currCol, n))
                {
                    currAns++;
                }
                else
                {
                    // Break the loop if the position is invalid
                    break;
                }
            }

            // Store the count of valid moves for the current step
            ans.push_back(currAns);
        }

        // Return the vector containing counts of valid moves for each step
        return ans;
    }
};