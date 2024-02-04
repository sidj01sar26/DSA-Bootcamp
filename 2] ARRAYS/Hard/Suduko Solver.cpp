// Leetcode

#include <vector>
using namespace std;

class Solution
{
public:
    // Function to check if it's safe to place 'value' at position (row, col) on the Sudoku board
    bool isSafe(int row, int col, vector<vector<char>> &board, char value)
    {
        int n = board.size();

        // Check if 'value' already exists in the same row or column
        for (int i = 0; i < n; i++)
        {
            if (board[row][i] == value || board[i][col] == value)
            {
                return false;
            }
        }

        // Determine the starting index of the 3x3 subgrid
        int startRow = 3 * (row / 3);
        int startCol = 3 * (col / 3);

        // Check if 'value' already exists within the 3x3 subgrid
        for (int i = startRow; i < startRow + 3; i++)
        {
            for (int j = startCol; j < startCol + 3; j++)
            {
                if (board[i][j] == value)
                {
                    return false;
                }
            }
        }

        return true; // It's safe to place 'value' at position (row, col)
    }

    // Function to solve the Sudoku puzzle recursively
    bool solve(vector<vector<char>> &board)
    {
        int n = board.size();

        // Iterate through each cell in the Sudoku board
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // If the cell is empty ('.')
                if (board[i][j] == '.')
                {
                    // Try filling the cell with values ranging from '1' to '9'
                    for (char val = '1'; val <= '9'; val++)
                    {
                        // Check if it's safe to place 'val' at position (i, j)
                        if (isSafe(i, j, board, val))
                        {
                            // Place 'val' at position (i, j)
                            board[i][j] = val;

                            // Recursively solve the remaining board
                            if (solve(board))
                            {
                                return true; // If a solution is found, return true
                            }
                            // If no solution is found, backtrack by resetting the cell to '.'
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false; // If no valid value can be placed in the current cell, return false
                }
            }
        }
        return true; // All cells are filled, indicating a solution is found
    }

    // Function to initiate the solving process
    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }
};
