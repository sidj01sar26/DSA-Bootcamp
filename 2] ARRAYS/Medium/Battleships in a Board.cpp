// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countBattleships(vector<vector<char>> &board)
    {
        // Get the number of rows and columns in the board
        int rows = board.size(), cols = board[0].size();
        // Initialize the count of battleships to 0
        int count = 0;

        // Iterate through each cell in the board
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                // Check if the current cell contains a battleship ('X')
                // and if it's not part of a larger battleship (i.e., there is no battleship to the left or above)
                if (board[i][j] == 'X' && (i == 0 || board[i - 1][j] == '.') && 
                (j == 0 || board[i][j - 1] == '.'))
                {
                    // Increment the count of battleships
                    count++;
                }
            }
        }

        // Return the count of battleships found
        return count;
    }
};