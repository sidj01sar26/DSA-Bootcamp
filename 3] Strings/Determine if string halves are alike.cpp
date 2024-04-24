// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int n = s.length();
        int ans = 0;
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        for (int i = 0; i < n; ++i)
        {
            if (vowels.count(s[i]))
            {
                ans += (i < n / 2) ? 1 : -1;
                // if(i < n / 2) {
                //     ans++;
                // }
                // else {
                //     ans--;
                // }
            }
        }
        return ans == 0;
    }
};
