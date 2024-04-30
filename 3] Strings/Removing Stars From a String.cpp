// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeStars(string s)
    {
        string c = ""; 
        // Initialize an empty string to store result
        for (int i = 0; i < s.size(); i++)
        { 
            // Iterate through each character in the input string
            if (s[i] == '*')
            { 
                // If the current character is '*', remove the last character from 'c'
                c.pop_back();
            }
            else
            { 
                // If the current character is not '*', append it to 'c'
                c += s[i];
            }
        }
        return c; // Return the modified string without '*'
    }
};