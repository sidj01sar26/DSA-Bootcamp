// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string smallestString(string s)
    {
        int i = 0; // Initialize index variable

        // Loop to find the first non-'a' character
        while (i < s.size() && s[i] == 'a')
        {
            i++; // Move to the next character
        }
        if (i >= s.size())
        {
            // If the string consists only of 'a's
            s[s.size() - 1] = 'z';
            // Change the last character to 'z'
            return s;
            // Return the modified string
        }
        // Decrease the first non-'a' character and return
        while (i < s.size() && s[i] != 'a')
        {
            s[i]--; // Decrease the character value
            i++;    // Move to the next character
        }
        return s; // Return the modified string
    }
};
