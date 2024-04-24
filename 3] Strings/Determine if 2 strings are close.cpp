// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.length() != word2.length())
        {
            return false;
        }

        vector<int> count1(26, 0), count2(26, 0);

        for (char ch : word1)
        {
            count1[ch - 'a']++;
        }

        for (char ch : word2)
        {
            count2[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if ((count1[i] > 0 && count2[i] == 0) ||
                (count1[i] == 0 && count2[i] > 0))
            {
                return false;
            }
        }

        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());

        return count1 == count2;
    }
};
