// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string makeGood(string s)
    {
        int n = s.size();
        // Get the size of the string
        for (int i = 0; i < n - 1; i++)
        {
            // Iterate through the string characters
            if (abs(s[i] - s[i + 1]) == 32)
            {
                // Check if adjacent characters are case variants
                s = s.substr(0, i) + s.substr(i + 2, n - i - 2);
                // Remove adjacent characters
                i = -1;
                // Reset loop counter to re-check from the beginning
                n -= 2;
                // Adjust string size after removal
            }
        }
        return s;
        // Return the modified string
    }
};
