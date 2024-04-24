// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int appendCharacters(string s, string t)
    {
        int m = s.size(); // Length of string s
        int n = t.size(); // Length of string t
        int j = 0;        // Index to traverse string t

        // Traverse string s
        for (int i = 0; i < m; i++)
        {
            // If character in s matches character in t
            if (s[i] == t[j])
            {
                n--; // Decrement the count of characters left in t
                j++; // Move to the next character in t
            }
        }

        return n; // Return the count of characters left in t
    }
};