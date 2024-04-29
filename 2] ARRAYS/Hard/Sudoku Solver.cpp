// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if placing a value at a given position is safe
    bool isSafe(int row, int col, vector<vector<char>> &board, char value)
    {
        int n = board.size();

        // Check the row
        for (int i = 0; i < n; i++)
        {
            if (board[row][i] == value)
                return false;
        }

        // Check the column
        for (int i = 0; i < n; i++)
        {
            if (board[i][col] == value)
                return false;
        }

        // Check the 3x3 box
        int boxRow = 3 * (row / 3);
        int boxCol = 3 * (col / 3);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[boxRow + i][boxCol + j] == value)
                    return false;
            }
        }

        return true; // If no conflicts found, position is safe
    }

    // Recursive function to solve the Sudoku puzzle
    bool solve(vector<vector<char>> &board)
    {
        int n = board.size();

        // Iterate through each cell in the board
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // Check for empty cell
                if (board[i][j] == '.')
                {
                    // Try to fill with values ranging from '1' to '9'
                    for (char val = '1'; val <= '9'; val++)
                    {
                        // Check if it's safe to place the value
                        if (isSafe(i, j, board, val))
                        {
                            // Insert the value
                            board[i][j] = val;
                            // Recur to solve the remaining board
                            if (solve(board))
                            {
                                return true; // If solution found, return true
                            }
                            else
                            {
                                // Backtrack if no solution found
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false; // If no valid value found, backtrack by returning false
                }
            }
        }
        return true; // If all cells are filled, Sudoku is solved
    }

    // Function to solve the Sudoku puzzle
    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }
};