// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getLastMoment(int n, vector<int> &left, vector<int> &right)
    {
        int maxtime = 0;
        for (auto i : left)
        {
            maxtime = max(maxtime, i);
        }
        for (auto i : right)
        {
            maxtime = max(maxtime, n - i);
        }
        return maxtime;
    }
};