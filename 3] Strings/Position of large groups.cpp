// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> largeGroupPositions(string s)
    {
        vector<vector<int>> res;
        int len = s.size();
        int groupStart = 0;

        for (int i = 1; i <= len; i++)
        {
            if (i == len || s[i] != s[groupStart])
            {
                int groupLength = i - groupStart;
                if (groupLength >= 3)
                {
                    res.push_back({groupStart, i - 1});
                }
                groupStart = i;
            }
        }

        return res;
    }
};

// or

#include <vector>
#include <string>

vector<vector<int>> largeGroupPositions(string s)
{
    vector<vector<int>> res;

    for (int i = 0, j = 0; i < s.size(); i = j)
    {
        while (j < s.size() && s[j] == s[i])
        {
            j++;
        }

        if (j - i >= 3)
        {
            res.push_back({i, j - 1});
        }
    }

    return res;
}
