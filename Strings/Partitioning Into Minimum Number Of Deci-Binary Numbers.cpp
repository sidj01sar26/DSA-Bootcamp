// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPartitions(string n)
    {
        // Variable to store the maximum digit found
        int maxDigit = 0;

        // Loop through each character in the string
        for (int i = 0; i < n.length(); i++)
        {
            // Retrieve the current character (digit) from the string
            char digit = n[i];

            // Convert the character representation of the digit to its numeric value
            int numericValue = digit - '0';

            // Check if the current digit is greater than the maximum digit found so far
            if (numericValue > maxDigit)
            {
                // If yes, update the maximum digit
                maxDigit = numericValue;
            }
        }

        // Return the maximum digit found in the string
        return maxDigit;
    }
};

// for (char digit : n)
// {
//     int numericValue = digit - '0';
//     if (numericValue > maxDigit)
//     {
//         maxDigit = numericValue;
//     }
// }
