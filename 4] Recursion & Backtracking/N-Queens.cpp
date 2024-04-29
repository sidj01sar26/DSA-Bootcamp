// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_map<int, bool> rowCheck;               
    // Check for occupied rows
    unordered_map<int, bool> upperLeftDiagnolCheck;  
    // Check for occupied upper-left diagonals
    unordered_map<int, bool> bottomLeftDiagnolCheck; 
    // Check for occupied bottom-left diagonals

    // Function to store the solution into the result vector
    void storeSolution(vector<vector<char>> &board, int n, vector<vector<string>> &ans)
    {
        vector<string> temp;
        for (int i = 0; i < n; i++)
        {
            string output = "";
            for (int j = 0; j < n; j++)
            {
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }

    // Function to check if placing a queen at a position is safe
    bool isSafe(int row, int col, vector<vector<char>> &board, int n)
    {

        if (rowCheck[row] == true) // Check if the row is occupied
            return false;

        if (upperLeftDiagnolCheck[n - 1 + col - row] == true) 
        // Check if the upper-left diagonal is occupied
            return false;

        if (bottomLeftDiagnolCheck[row + col] == true) 
        // Check if the bottom-left diagonal is occupied
            return false;

        return true;
    }

    // Recursive function to solve the N-Queens problem
    void solve(vector<vector<char>> &board, int col, int n, vector<vector<string>> &ans)
    {
        // Base case: If all queens are placed, store the solution
        if (col >= n)
        {
            storeSolution(board, n, ans);
            return;
        }

        // Try placing queen in each row of the current column
        for (int row = 0; row < n; row++)
        {
            if (isSafe(row, col, board, n))
            {

                board[row][col] = 'Q';                           
                // Place the queen
                rowCheck[row] = true;                            
                // Mark the row as occupied
                upperLeftDiagnolCheck[n - 1 + col - row] = true; 
                // Mark the upper-left diagonal as occupied
                bottomLeftDiagnolCheck[row + col] = true;        
                // Mark the bottom-left diagonal as occupied

                solve(board, col + 1, n, ans); 
                // Recur for next column

                // Backtrack: Reset the changes made
                board[row][col] = '.';                            
                // Remove the queen
                rowCheck[row] = false;                            
                // Mark the row as unoccupied
                upperLeftDiagnolCheck[n - 1 + col - row] = false; 
                // Mark the upper-left diagonal as unoccupied
                bottomLeftDiagnolCheck[row + col] = false;        
                // Mark the bottom-left diagonal as unoccupied
            }
        }
    }

    // Main function to solve the N-Queens problem
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<char>> board(n, vector<char>(n, '.')); 
        // Initialize the chessboard
        vector<vector<string>> ans;                          
        // Store solutions
        int col = 0;                                         
        // Start from the first column
        solve(board, col, n, ans);                           
        // Start solving recursively
        return ans;                                          
        // Return the solutions
    }
};
