// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int index = 0;
        int result = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                index = 0;
            }
            else
            {
                index++;
                result = index;
            }
        }
        return result;
    }
};