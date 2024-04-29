// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<string> &answer, int n, int open, int close, string output)
    {
        // Base case: If both open and close parentheses are used up, add the output to the answer vector
        if (open == 0 && close == 0)
        {
            answer.push_back(output);
            return;
        }

        // If there are remaining open parentheses, add '(' and recursively call the function
        if (open > 0)
        {
            output.push_back('(');
            solve(answer, n, open - 1, close, output);
            output.pop_back(); // Backtrack: Remove the last added '('
        }

        // If there are more open parentheses than close parentheses, add ')' and recursively call the function
        if (close > open)
        {
            output.push_back(')');
            solve(answer, n, open, close - 1, output);
            output.pop_back(); // Backtrack: Remove the last added ')'
        }
    }

    // Main function to generate valid parentheses combinations
    vector<string> generateParenthesis(int n)
    {
        vector<string> answer;                 
        // Vector to store the generated combinations
        int open = n;                          
        // Number of remaining open parentheses
        int close = n;                         
        // Number of remaining close parentheses
        string output = "";                    
        // Current combination
        solve(answer, n, open, close, output); 
        // Call the recursive function
        return answer;                         
        // Return the generated combinations
    }
};