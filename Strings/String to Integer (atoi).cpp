// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to convert a string to an integer
    int myAtoi(string s)
    {
        int num = 0;  // Initialize the result
        int i = 0;    // Initialize the index for traversing the string
        int sign = 1; // Initialize the sign of the number

        // Skip leading spaces
        while (s[i] == ' ')
        {
            i++;
        }

        // Check for sign
        if (i < s.size() && (s[i] == '-' || s[i] == '+'))
        {
            sign = (s[i] == '+') ? 1 : -1; // Determine the sign of the number
            i++;                           // Move to the next character
        }

        // Convert digits to integer
        while (i < s.size() && isdigit(s[i]))
        {
            // Check for overflow/underflow
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7'))
            {
                return (sign == -1) ? INT_MIN : INT_MAX; // Return INT_MIN or INT_MAX based on the sign
            }
            num = num * 10 + (s[i] - '0'); // Convert the character to integer and add to the result
            i++;                           // Move to the next character
        }

        return num * sign; // Return the result with the sign
    }
};
