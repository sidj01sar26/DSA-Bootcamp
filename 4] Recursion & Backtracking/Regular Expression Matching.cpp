// Leetcode - HARD

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isMatch(string s, string p)
    {
        vector<vector<int>> memo(s.size() + 1, vector<int>(p.size() + 1, -1));
        // Memoization table
        return isMatchHelper(s, 0, p, 0, memo);
    }

    bool isMatchHelper(const string &s, int si, const string &p, int pi, vector<vector<int>> &memo)
    {
        // Check if we already computed the result for this combination of indices
        if (memo[si][pi] != -1)
        // Checking memoization
        {
            return memo[si][pi];
        }

        // Base case
        if (pi == p.size())
        // Pattern is fully traversed
        {
            return memo[si][pi] = si == s.size();
            // Check if string is also fully traversed
        }

        bool firstMatch = (si < s.size() && (s[si] == p[pi] || p[pi] == '.'));
        // Checking if characters match

        if (pi + 1 < p.size() && p[pi + 1] == '*') // Handling '*'
        {
            // '*' Matches zero or more of the preceding element
            memo[si][pi] = (isMatchHelper(s, si, p, pi + 2, memo)) || (firstMatch && isMatchHelper(s, si + 1, p, pi, memo));
        }
        else
        // No '*' involved
        {
            memo[si][pi] = firstMatch && isMatchHelper(s, si + 1, p, pi + 1, memo);
            // Move to next characters
        }

        return memo[si][pi];
    }
};