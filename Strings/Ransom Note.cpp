// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        vector<int> count(26);

        for (const char c : magazine)
        {
            count[c - 'a']++;
        }

        for (const char c : ransomNote)
        {
            if (count[c - 'a'] == 0)
            {
                return false;
            }
            count[c - 'a']--;
        }

        return true;
    }
};