// Leetcode - HARD

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isMatchHelper(string &s, int si, string &p, int pi, vector<vector<int>> &memo)
    {
        // Check if we already computed the result for this combination of indices
        if (memo[si][pi] != -1)
        { // Memoization check
            return memo[si][pi];
        }

        // base case: if both strings are empty
        if (si == s.size() && pi == p.size())
        {
            return true;
        }

        // base case: if s is empty but p is not fully consumed
        if (si == s.size() && pi < p.size())
        {
            // Check if the remaining pattern consists only of '*'
            for (int i = pi; i < p.size(); i++)
            {
                if (p[i] != '*')
                {
                    return memo[si][pi] = false;
                }
            }
            return memo[si][pi] = true;
        }

        // Single char matching
        if (s[si] == p[pi] || p[pi] == '?')
        {
            return memo[si][pi] = isMatchHelper(s, si + 1, p, pi + 1, memo);
        }

        // Case for '*'
        if (p[pi] == '*')
        {
            // treat star as empty or null
            bool caseA = isMatchHelper(s, si, p, pi + 1, memo);

            // let * consume one char
            bool caseB = isMatchHelper(s, si + 1, p, pi, memo);

            return memo[si][pi] = caseA || caseB;
        }

        // if char does not match
        return memo[si][pi] = false;
    }

    bool isMatch(string s, string p)
    {
        int si = 0; // pointer index for s string
        int pi = 0; // pointer index for p string

        // memoization table
        vector<vector<int>> memo(s.size() + 1, vector<int>(p.size() + 1, -1));
        return isMatchHelper(s, si, p, pi, memo);
    }
};