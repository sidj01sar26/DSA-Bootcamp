// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string result; // Initialize an empty string to store the result

        // Loop until columnNumber is greater than 0
        while (columnNumber > 0)
        {
            columnNumber--;                   
            // Decrement columnNumber to make it 0-based
            char c = 'A' + columnNumber % 26; 
            // Calculate the character corresponding to the current position
            result = c + result;              
            // Prepend the character to the result string
            columnNumber /= 26;               
            // Divide columnNumber by 26 to move to the next place value
        }

        return result; // Return the final result string
    }
};