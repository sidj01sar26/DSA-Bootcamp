// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string orderlyQueue(string s, int k)
    {
        string ans = s;

        if (k == 1)
        {
            // If k is 1, rotate the string to find smallest string
            for (int i = 1; i < s.size(); i++)
            {
                ans = min(ans, s.substr(i) + s.substr(0, i));
            }
        }
        else
        {
            // If k is greater than 1, simply sort the string
            sort(ans.begin(), ans.end());
        }

        return ans;
    }
};
