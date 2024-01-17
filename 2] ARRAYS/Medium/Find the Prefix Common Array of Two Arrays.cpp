// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &a, vector<int> &b)
    {
        int n = a.size();
        vector<int> aux(n + 1, 0);
        vector<int> ans(n, 0);
        int common = 0;

        for (int i = 0; i < n; i++)
        {
            aux[a[i]]++;

            if (aux[a[i]] == 2)
            {
                common++;
            }

            aux[b[i]]++;

            if (aux[b[i]] == 2)
            {
                common++;
            }

            ans[i] = common;
        }
        return ans;
    }
};
