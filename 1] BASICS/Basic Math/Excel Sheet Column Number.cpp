// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int result = 0; // Initialize the result to 0

        for (char c : columnTitle)
        {                          
            // Iterate through each character in the column title string
            result *= 26;          
            // Multiply the current result by 26 to shift it to the next place value
            result += c - 'A' + 1; 
            // Add the value of the current character (converted from 'A'-'Z' to 1-26)
        }

        return result; // Return the final computed result
    }
};