// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestContinuousSubstring(string s)
    {
        // Initialize the result to 1, as the minimum substring length is 1.
        int result = 1;

        // Loop through the characters of the string.
        for (int i = 0, j = 0; i < s.size(); i++)
        {
            // If the current character does not match the expected character based on the position,
            // update the starting index of the current substring.
            if (s[i] != s[j] + i - j)
            {
                j = i;
            }
            // Update the maximum length of continuous substring found so far.
            result = max(result, i - j + 1);
        }

        // Return the maximum length of continuous substring found in the string.
        return result;
    }
};