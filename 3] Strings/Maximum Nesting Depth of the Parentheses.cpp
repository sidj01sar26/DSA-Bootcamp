// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int count = 0;    // Initialize a counter for the current depth
        int maxDepth = 0; // Initialize a variable to store the maximum depth found
        for (char c : s)
        { // Loop through each character in the string
            if (c == '(')
            {            // If the character is an opening parenthesis
                count++; // Increment the depth counter
                if (maxDepth < count)
                {                     // If the current depth is greater than the maximum depth found so far
                    maxDepth = count; // Update the maximum depth
                }
            }
            else if (c == ')')
            {            // If the character is a closing parenthesis
                count--; // Decrement the depth counter
            }
        }
        return maxDepth; // Return the maximum depth found
    }
};
