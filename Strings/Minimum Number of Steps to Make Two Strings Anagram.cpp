// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        vector<int> count(26, 0);

        for (char c : s)
        {
            count[c - 'a']++;
        }

        for (char c : t)
        {
            count[c - 'a']--;
        }

        int steps = 0;

        for (int i : count)
        {
            if (i > 0)
            {
                steps += i;
            }
        }

        return steps;
    }
};
