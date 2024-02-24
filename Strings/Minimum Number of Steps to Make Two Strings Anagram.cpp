// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            count[c - 'a']++;
        }

        for (int i = 0; i < t.length(); i++)
        {
            char c = t[i];
            count[c - 'a']--;
        }

        int steps = 0;

        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
            {
                steps += count[i];
            }
        }

        return steps;
    }
};
